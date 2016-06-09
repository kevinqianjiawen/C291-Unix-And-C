#include<stdio.h>
#include<stdlib.h>
#include"node.h"

struct node *listinsert(struct node *list, struct node *new){
  struct node *temp;
  while(list){
    temp = list->next;
    if(list->item > new->item && temp->item <= new->item){
      list->next = new;
      new->next = temp;
      break;
    }
    
    if(list->item <= new->item){
      new -> next = list;
      list = new;
      break;
    }
    list = temp;
 }

}

void listSum(struct node *p){
  int sum = 0;
  while(p->next != NULL){
    sum += p->item;
    p = p->next;
  }
  sum += p->item;
  printf("%d\n",sum);
}

void printList(struct node *p){
  while(p){
    printf("%d-%p\n", p->item, p->next);
    p = p->next;
  }
}



void main(void){
  int i;
  struct node *current;
  struct node *head;
  head = NULL;
  struct node new ={.item=10, .next=NULL};

  for(i=1; i<5; i++){
    current = (struct node *) malloc(sizeof(struct node));
    current -> item = i*2;
    current -> next = head;
    head = current;

  }
  
  listSum(head);
  
  printList(head);
  
  printf("Insert:\n");
  head = listinsert(head, &new);
  printList(head);
}

