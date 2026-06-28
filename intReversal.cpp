#include<iostream>
#include<limits>
int reverse(int x);
int main(){
  int num;
  std::cout<< "Enter a number to reverse: ";
  std::cin>> num;
  std::cout<< reverse(num) << std::endl;
}
int reverse(int x){
  int reversed = 0;
  while( x != 0){
    int digit = x % 10;
    if(reversed > std::numeric_limits<int>::max() / 10 || reversed == std::numeric_limits<int>::max() && digit > 7){
      return false;
    }
    if(reversed < std::numeric_limits<int>::min() / 10 || reversed == std::numeric_limits<int>::min() && digit < -8){
      return false;
    }
    reversed = reversed * 10 + digit;
    x /= 10;
  }
  return reversed;
}