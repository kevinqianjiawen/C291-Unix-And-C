#include <stdio.h>
typedef struct node{
  int item;
  struct node *next;
} node_t;

node_t *add(node_t *list, int item);
int count(node_t *list);
int search(node_t *list, int num);
node_t *insert(node_t *list, int item, int position);
void display(node_t *list);
