#include<iostream>
#include<limits>
bool isPalindrome(int x);
int main(){
  int num;
  std::cout<<"Enter a number to check: ";
  std::cin>>num;
  if(isPalindrome(num)){
    std::cout<< "The number is Palindrome" << std::endl;
  }
  else{
    std::cout << "The number is not Palindrome" << std::endl;
  }
}
bool isPalindrome(int x){
  if(x < 0 || (x % 10 == 0 && x != 0)){
    return false;
  }
  int original = x;
  int reversed = 0;
  while(x > 0){
    int digit = x % 10;
    if(reversed > std::numeric_limits<int>::max() / 10 ||  reversed == std::numeric_limits<int>::max() && digit > 7){
      return false;
    }
    reversed = reversed * 10 + digit;
    x /= 10;
  }
  return original == reversed;
}