#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
void main(void){
  struct stack *header;
  header = NULL;
  int option, element;
  while(1){
    printf("Enter an option\n");
    printf("  1. Push\n");
    printf("  2. Pop\n");
    printf("  3. Peek\n");
    printf("  4. exit\n");
    printf("\n");
    
    scanf("%d", &option);
    switch(option){
    case 1:
      printf("Enter an element to push\n");
      scanf("%d", &element);
      header = push(header, element);
      display(header);
      break;
    case 2:
      header = pop(header);
      break;
    case 3:
      peek(header);
      break;
    case 4:
      exit(0);
    default:
      printf("The option does not exist\n");
    }
  }
}
