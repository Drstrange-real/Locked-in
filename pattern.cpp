#include<iostream>
using namespace std;

void floydTriangle(int n);
void hollowDiamond(int n);
void invertedTriangle(int n);
void pyramid(int n);
void reverseTriangle(int n);
void square(int n);
void triangle(int n);

#define MENU_ITEM(num, funcName) \
    cout << num << ". " << #funcName << endl;

int main() {
    cout << "**********************************" << endl;
    cout << "   Welcome to pattern generator" << endl;
    cout << "**********************************" << endl;
    cout << "  Choose any pattern to print:-" << endl;
    MENU_ITEM(1, floydTriangle);
    MENU_ITEM(2, invertedTriangle);
    MENU_ITEM(3, pyramid);
    MENU_ITEM(4, reverseTriangle);
    MENU_ITEM(5, square);
    MENU_ITEM(6, triangle);
    MENU_ITEM(7, hollowDiamond);

    cout << ":- ";
    
    int choice;
    cin >> choice;
    
    int n;
    cout << "Enter number of lines to print: ";
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
      case 7:
      hollowDiamond(n);
      break;
  }
}
void floydTriangle(int n){
  int num = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
void hollowDiamond(int n){
  int num = n - 2;
  //top
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i; j++){
      cout << " ";
    }
    cout << "*";
    if(i != 0){
      for(int j = 0; j < 2 * i - 1;j++){
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
  //bottom
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < i + 2; j++){
      cout << " ";
    }
    cout << "*";
    if( i != n - 2){
      for(int j = 2 * num - 1; j > 0; j--){
        cout << " ";
      }
      cout << "*";
      num --;
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


























