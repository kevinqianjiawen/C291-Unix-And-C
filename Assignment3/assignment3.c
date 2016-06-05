#include<stdlib.h>
#include<stdio.h>
void maxProduct(int array[], int n){
  if(n < 2){
    printf("No pairs\n");
  }
  
  int first = array[0], second = array[1];
  
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(array[i]*array[j] > first*second){
	first = array[i];
	second = array[j];
      }
    }
  }
  printf("%d, %d\n", first, second);

}

int main(int argc, char *argv[]){
  int array[argc - 1];
  for(int i = 0; i < argc - 1; i++){
    array[i] = atoi(argv[i + 1]);
  }
  maxProduct(array, argc -1);
}

