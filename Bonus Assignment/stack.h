#include <stdio.h>
typedef struct stack{
  int number;
  struct stack  *next;
} stack_t;

//define the function
struct stack *push(stack_t *list, int num);
struct stack *pop(stack_t *list);
void peek(stack_t *list);
