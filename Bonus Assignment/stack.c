#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
void display(stack_t *list){
  while(list){
    printf("%d \n", list->number);
    list= list->next;
  }
}
struct stack * push(stack_t *list, int num){
  stack_t *new;
  new = (stack_t *) malloc(sizeof(stack_t));
 
  new->number = num;
  new->next = list;
  list = new;
  return (list);
}



void peek(stack_t *list){
  int num;
  if(list){
    num = list->number;
    printf("The top element is %d\n", num);
  }else{
  printf("The stack is empty\n");
}
}

struct stack * pop(stack_t *list){
  int num;
    if(list){
    num = list->number;
    printf("Removed element %d\n", num);
    list  = list->next;
    return list;
  }else{
  printf("The stack is empty\n");
  return NULL;
}
}
