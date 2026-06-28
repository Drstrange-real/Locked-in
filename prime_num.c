#include<stdio.h>
int main(){
  printf("Enter the number to check: ");
  int num;
  int isPrime = 1;
  scanf("%d",&num);
  for(int i = 2; i < (num - 1); i++){
    if(num % i == 0){
      isPrime = 0;
    }
  }
  if(isPrime){
    printf("The number is Prime.\n");
  }
  else{
    printf("The number is not Prime. \n");
  }
}