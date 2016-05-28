#include<math.h>
#include<stdio.h>
//convert decimal numbers to octal numbers
int toOctal(int num){
  int octal = 0, i = 1;
  while(num != 0){
    octal += num % 8 * i;
    i *= 10;
    num /= 8;
  }
  return octal;
}


//convert octal to decimal

int toDecimal(int n){
  int decimal = 0, i = 0, rem;
  while (n!=0){
    rem = n % 10;
    n /= 10;
    decimal += rem*pow(8,i);
    i++;
  }
  return decimal;
}

//convert octal numbers to binary numbers
int toBinary(int n){
  int num = toDecimal(n);

  int i = 1, rem;
  int binary = 0;
  while(num!=0){
    rem = num%2;
    num /= 2;
    binary += rem*i;
    i *= 10;
  }
  return binary;
}

//addition operation or multiplication
int cal(int num1, int num2, char op){
  int num;
  if(op =='+'){
    num = toDecimal(num1) + toDecimal(num2);
  } else {
    num = toDecimal(num1) * toDecimal(num2);
  }

  return toOctal(num);
}

int main(void){
  int num1, num2, result;
  char op;
 
  printf("Enter the first number:\n");
  scanf("%d", &num1);
  printf("Enter the second number:\n");
  scanf("%d", &num2);
  
  printf("Please enter the operation (+ or *)\n");
  scanf(" %c", &op);
  
  printf("%d and %d.\n", num1, num2);
  num1 = toOctal(num1);
  num2 = toOctal(num2);
  printf("The numbers in cotal are %d and %d.\n", num1, num2);

  result = cal(num1, num2, op);
  printf("The operation of two octal numbers is %d\n", result);
  
  result = toBinary(result);

  printf("binary is %d\n", result);
  
 }
