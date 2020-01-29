// Lena Khalidi
// Problem 3: zeroboth

#include <iostream>
using namespace std;

// function to zero both numbers
void zeroBoth(int &num1, int &num2){
  num1 = 0;
  num2 = 0;
}


int main(){
  int x = 37;
  int y = 123;
  cout << "First number before function call: " << x << endl;
  cout << "Second number before function call: " << y << endl;
  // calls function
  zeroBoth(x,y);
  cout << "First number after function call: " << x << endl;
  cout << "Second number after function call: " << y << endl;

   return 0;




}
