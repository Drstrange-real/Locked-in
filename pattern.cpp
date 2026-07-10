#include<iostream>
using namespace std;
void floydTriangle(int n);
void invertedTriangle(int n);
void pyramid(int n);
void reverseTriangle(int n);
void square(int n);
void triangle(int n);
int main(){
  cout << "**********************************" << endl;
  cout << "   Welcome to pattern generator" << endl;
  cout << "**********************************" << endl;
  cout << "  Choose any pattern to print:-" << endl;
  cout << "1. floydTriangle" << endl;
  cout << "2. invertedTriangle"<< endl;
  cout << "3. pyramid" << endl;
  cout << "4. reverseTriangle"  << endl;
  cout << "5. square" << endl;
  cout << "6. triangle" << endl;
  cout << ":- ";
  int choice;
  cin >> choice;
  int n;
  cout<< "Enter number of lines to print: ";
  cin >> n;
  switch(choice){
    case 1:
      floydTriangle(n);
      break;
    case 2:
      invertedTriangle(n);
      break;
    case 3:
      pyramid(n);
      break;
    case 4:
      reverseTriangle(n);
      break;
    case 5:
      square(n);
      break;
    case 6:
      triangle(n);
      break;
  }
}
void floydTriangle(int n){
  int num = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
void invertedTriangle(int n){
  int num = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    for(int j = 0; j < n - i; j++){
      cout << num;
    }
    cout << endl;
    num++;
  }
}
void pyramid(int n){
  for(int i = 0; i < n; i++){
    int num = 1;
    for(int j = 0; j < n-i; j++){
      cout<<" ";
    }
    for(int j = 0; j < i+1; j++){
      cout<< j + 1;
    }
    for(int j = i ; j > 0; j--){
      cout<< j;
    }
    cout<<endl;
    num++;
  }
}
void reverseTriangle(int n){
  for(int i = 0; i < n; i++){
    int num = 1;
    for(int j = i+1; j > 0; j--){
      cout<< j;
    }
    cout << endl;
  }
}
void square(int n){
  int num = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n;j++){
      cout<< num << " ";
      num++;
    }
    cout<< endl;
  }
}
void triangle(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i + 1; j++){
      cout<<"*";
    }
    cout<< endl;
  }
}


























