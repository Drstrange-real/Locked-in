#include<stdio.h>
unsigned long long factorial(int num);
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("%llu", factorial(num));
  return 0;
}
unsigned long long factorial(int num){
  if(num == 0 || num == 1){
    return 1;
  }
  else{
  return num * factorial(num - 1);
  }
}