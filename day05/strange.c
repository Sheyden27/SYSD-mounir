int my_strlen(char* str) {
  int nb;
  for (int i = 0; str[i] != '\0'; i++) {
    nb++;
  }
  return nb;
}

int my_isupper(char *str) {
  int end = my_strlen(str);
  for (int i = 0; i < end;) {
    if (str[i] > 'A' && str[i] < 'Z') {
      i++;
    }
    else return 0;
  }
  return -1;
}

int main(void) {
  return 0;
}
