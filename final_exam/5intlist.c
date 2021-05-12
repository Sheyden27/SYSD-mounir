#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

typedef struct node node;
struct node {
   int val;
   node *next;
};

int loop_detect(node *head) {
  int array[10];
  int i = 0;
  int temp;
  node *walk;

  walk = head;
  while (walk->next != NULL) {
    temp = walk->val;
    for (int i = 0; i < 10; i++) {
      if (array[i] == temp) {
	printf("\n /!\\ Il y a une boucle dans votre programme /!\\ \n Arrêt en cours... \n\n");
	exit(EXIT_SUCCESS);
      }
    }
    array[i] = walk->val;
    walk = walk->next;
    i++;
  }
  return 0;
}

node *create_node(int val) {
    node *p;
    p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    return p;
}

void print_list_slow(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juset walk
        printf("%d ", walk->val);
        fflush(stdout);
        walk = walk->next;
        sleep(1);
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);

    if (head == NULL) {
        head = newnode;
    } else {
        walk = head;
        while (walk->next != NULL) {
            walk = walk->next;
        }
        walk->next = newnode;
    }
    return head;
}

int main() {
    node *head = NULL;

    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, -5);
    head = append_val(head, 41);
    print_list_slow(head);

    head->next->next->next->next = NULL;
    loop_detect(head);
    print_list_slow(head);
}
