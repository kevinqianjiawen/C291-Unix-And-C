#include<math.h>
#include<stdio.h>
void main(){
  int i;
  printf("Enter number\n");
  scanf("%d",&i);
  //this part is to find the length of the number   
    int temp = i;
    int count;
    while(temp > 0){
      temp = temp/10;
      count++;
    }
  
    //get the number which is the sum of digits rasied to the power total numbers of digits
    int temp2 = i;
    int num=0;
    while(temp2 != 0){
      num += pow((temp2 % 10),count);
      temp2 = temp2 / 10;
    }
    
    //check whether it is a armstrong number
    if(i == num){
      printf("The number is armstrong");
    } else{
      printf("The number is not armstrong");
    }

}
