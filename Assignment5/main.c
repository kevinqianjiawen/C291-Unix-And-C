#include <stdio.h>
#include <stdlib.h>
#include "node.h"
void main(void){
  node_t *header;
  header = NULL;
  int option, item,index, position;
  while(1){
    printf("Enter your option:\n");
    printf("  1. Add element\n");
    printf("  2. Search\n");
    printf("  3. Insert\n");
    printf("  4. display\n");
    printf("  5. Exit\n");
    
    scanf("%d", &option);
    printf("\n");
    switch(option){
    case 1:
      printf("Enter the value: ");
      scanf("%d", &item);
      header = add(header, item);
      printf("Value added to the linked list\n");
      break;
    case 2:
      scanf("%d", &item);
      index = search(header, item);
      if(index == -1){
	printf("The number doesn't exit\n");
      }else{
	printf("The item is at index %d\n", index);
	}
      break;
    case 3:
      printf("Enther the position\n");
      scanf("%d", &position);
      printf("Enter the element\n");
      scanf("%d", &item);
      header = insert(header, item, position);
      printf("Element inserted\n");
      display(header);
      printf("\n");
      break;
    case 4:
      display(header);
      break;
    case 5:
      exit(0);
    }
  }
}
