#include<stdio.h>
#include"student.h"
void main(void){
  int user;
  
  printf("Enter the no  of students to be created:");
  scanf("%d", &user);
  if(user <=5){
    int option;
    personal_t users[user];
    printf("%d student created.\n", user);
    for(;;){
      printf("Enter your option\n");
      printf("1. Update record\n");
      printf("2. Print all student record\n");
      printf("3. Find out average of class\n");
      printf("4. Exit\n");
    
      scanf("%d", &option);
      switch(option){
        case 1:
	  searchIndex(users, user);
	break;
        case 2:
          printRecord(users, user);
          break;
        case 3:
          findAverage(users, user);
          break;
        case 4:
          return;
        default:
          printf("The option can not be found\n");
          break;
       }
     
     }
  }
  else{
    printf("maximum of 3-5 student\n");
  }
  
}
