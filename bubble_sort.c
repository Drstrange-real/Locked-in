#include<stdio.h>
void swap (int *a, int *b);
int main(){
  int num;
  printf("Enter the number of elements: ");
  scanf("%d",&num);
  int arr[num];
  printf("Enter the numbers to sort ");
  for(int i = 0; i < num; i++){
    printf(": ");
    scanf("%d", &arr[i]);
  }
   for(int i = 0; i < num; i++){
    for(int j = 0; j < num - i - 1; j++){
    if(arr[j] > arr[j+1]){
      swap(&arr[j], &arr[j + 1]);
    }
  }
}
   printf("sorted number: ");
   for(int i = 0; i < num; i++){
    printf("%d\t", arr[i]);
   }
  }
void swap (int *a, int *b){
  int temp = *a;
  *a = *b; 
  *b = temp;
}