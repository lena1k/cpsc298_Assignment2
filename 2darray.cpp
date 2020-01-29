// Lena Khalidi
// Problem 2: 2darray

#include <iostream>
using namespace std;
int main(){

  //create 2d array
  int a[4][5];
  int num;

  //loop through array and fill using user input
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cout << "Enter a number: ";
      cin >> num;
      a[i][j] = num;
    }
  }
  return 0;
}
