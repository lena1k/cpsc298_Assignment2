// Lena Khalidi
// Problem 4: salestax

#include <iostream>
using namespace std;
#include <iomanip>

// function to represent sales tax as a percent and cost of an item with tax
float addTax(float taxRate, float cost){
  
  taxRate = taxRate / 100.0;

  float taxOnTime = cost * taxRate;

  float totalCost = taxOnTime + cost;

  cout << setprecision(2) << fixed;
  return totalCost;
}
int main(){
  cout << "The total cost with tax is: $" << addTax(36.3, 92.24) << endl;
  return 0;
}
