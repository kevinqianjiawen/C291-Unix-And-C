#include<stdio.h>
#include<stdlib.h>
#include"node.h"

//add item to the last
node_t *add(node_t *list, int item){
  node_t *new;
  new = (node_t *) malloc (sizeof(node_t));
  
  new->item = item;
  new->next = list;
  list = new;
  
  return (list);
}

int count(node_t *list){
  int count = 0;
  while(list){
    count++;
    list = list->next;
  }
  return count;
}

int search(node_t *list,int num){
  int index = count(list);
  while(list){
    if(list->item == num){
      return index;
    }
      list = list->next;
      index--;
  }
  return (-1);
}
//insert the item in the position
node_t *insert(node_t *list, int item, int position){
  int index = count(list);
  int lastPosition = count(list);
  node_t *new;
  node_t *current;
  node_t *last;
  last = list;
  new = (node_t *)malloc(sizeof(node_t));
  while(list){
    current = last->next;
    if((position + 1) == index){
      new->item = item;
      last->next = new;
      new->next = current;
      break;
    }
    if(position == lastPosition){
      new->item = item;
      new->next = list;
      list = new;
      break;
    }
      last  = last->next;
      index--;
    
  } 
  return list;
}

/*struct node *reverse(struct node *list){
  struct node *prev = NULL;
  struct node *current = list;
  struct node *next;
  while(current){
    next = current -> next;
    current->next = prev;
    prev = current;
    current = next;
  }
  list = prev;
  return list;
}
*/
//print the reserved list 
void display(node_t *list){
  int num[count(list)-1];
  int counter = 0;

  while(list){
    num[counter] = list->item;
    list = list->next;
    counter++;
  }
 
  int i;
  for(i = 1; i<counter; i++){
      printf("%d->", num[counter-i]);
  }
  printf("%d\n", num[counter - i]);
  
}

