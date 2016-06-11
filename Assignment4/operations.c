#include<stdio.h>
#include"student.h"
#include<stdlib.h>
#include<string.h>

//print all student record
void printRecord( personal_t list[], int num){
 
  int i;
  for(i=0; i<num; i++){
    printf("%s %s %s %d %d %d %d\n", list[i].name, list[i].no, list[i].adress, list[i].grade.assignment, list[i].grade.midterm,  list[i].grade.finalmark,  list[i].grade.total);
  }
}


//The average of total for class
void findAverage( personal_t list[], int num){
 
  int i;
  int total = 0;
  int average;
  for(i=0; i < num; i++){
    printf("%d", list[i].grade.total);
    total +=  list[i].grade.total;
  }
  average = (int) total/num;
  printf("The average score is %d\n",average);
}

//update the record
void update(personal_t list[], int i){
  int goback = 0;
  int num;
  //when the user didn't want to choose go back, it will not go back, when the user choose 7, the loop will close
  while(!goback){
 
  printf("1. name\n2. contact no\n3. adress\n4. assignment\n5. midterm\n6. final\n7. Go back\n");
  
  scanf("%d", &num);
  switch(num){
  case 1:
    scanf("%s", list[i].name);
    break;
  case 2:
    scanf("%s", list[i].no);
    break;
  case 3:
    scanf("%s", list[i].adress);
    break;
  case 4:
    scanf("%d", &list[i].grade.assignment);
    break;
  case 5:
    scanf("%d", &list[i].grade.midterm);
    break;
  case 6:
    scanf("%d", &list[i].grade.finalmark);
    break;
  case 7:
    goback = 1;
    break;
  default:
    printf("The option can not be found\n");
    break;
    }
  }
 list[i].grade.total = list[i].grade.assignment +  list[i].grade.midterm +  list[i].grade.finalmark; 
  
}

//user will enter the index to write the date
void searchIndex(personal_t list[], int user){
  printf("Enter the index of student who you want to edit: ");
  int i;
  for(i=0; i<user; i++){
    printf("%d ", i+1);
  }
  int index;
  scanf("%d", &index);
  if(index){
    update(list, index-1);
  }else{
    printf("Index doesn't exit");
  }
}
