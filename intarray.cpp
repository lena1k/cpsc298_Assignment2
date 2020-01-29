// Lena Khalidi
// Problem 1: intarray

//Write a program that will read up to ten nonnegative integers into an array called numberArray and then write
//the integers back to the screen(console output).
//For this exercise you need not use any functions.
#include <iostream>
using namespace std;
int main(){

  // create an array of 10 values
  int numberArray[10];
  int number;


  // loops through array 10 times
  for(int i = 0; i < 10; ++i){
    // prompt user for values
    cout << "Enter a nonnegative integer: " << endl;
    cin >> number;
    //check if number is positive
    if(number < 0){
      cout << "You entered a negative integer. Please enter a nonnegative number: ";
      cin >> number;
    }
    // assigns place is array with number
    numberArray[i] = number;
  }
  // print values
  cout << "The numbers you entered: ";
  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << ' ';
  }

  cout << endl;
  return 0;
}
