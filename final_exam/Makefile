.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = 5intlist 

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)
