#include<stdio.h>
#include<stdlib.h>
#include"node.h"

struct node *listInsert(struct node *list, struct node *new){
  struct node *current;
  struct node *last;
  last = list;
  while(last){
   
    current = last->next;
    //insert an item in the middle;
    if(last->item > new-> item && new->item >= current->item){
      last -> next = new;
      new -> next = current;
      break;
    }
    //insert an item in the head;
    if(last->item <= new->item){
      new->next = list;
      list = new;
      break;
    }
    //insert an itme at the tail;
    if(current->next == NULL){
      current->next = new;
      break;
    }
    last = last->next;
 }
  return (list);
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
  struct node new ={.item= 1, .next=NULL};

  for(i=1; i<5; i++){
    current = (struct node *) malloc(sizeof(struct node));
    current -> item = i*2;
    current -> next = head;
    head = current;

  }
  
  listSum(head);
  
  printList(head);
  
  printf("Insert:\n");
  head = listInsert(head, &new);
  printList(head);
}

