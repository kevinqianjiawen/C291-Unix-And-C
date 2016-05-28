#include<stdio.h>

void swap(int *swap1, int *swap2){
  int temp;
  temp = *swap1;
  *swap1 = *swap2;
  *swap2 = temp;
}


int main(void){
  int num1, num2;
  printf("enter the first number\n");
  scanf("%d", &num1);
  printf("enter the second  number\n");
  scanf("%d", &num2);
  swap(num1, num2);
}



************************************


#include <stdio.h>
int arraySum (int *array, const int n){
  int sum = 0;
  int * const arrayEnd = array + n;
  for( ; array < arrayEnd; ++array)
    sum += *array;
  // printf("%d\n", *array);
  return sum;
}

int main(void){
  //int arraySum (int *array, const int n);
  int values[10]= {3,7,-9,3,6,-1,7,9,1,-5};
  printf("The sum is %i\n", arraySum (values, 10);
  return 0;
}

    //character  char ' '
    //String  set of character  "abc"
    

    char *argv[], int argc


#include<stdio.h>
#define N 5
int main(void){
    int i, j, aa[N];
    
    for(i=0; i< N; i++){
    	     aa[i] = i*i;
	     printf("*(aa + %d)=%d; aa[%d]=%d\n", i, *(aa+i), i, aa[i])
	     }
}


balaprasath rajan