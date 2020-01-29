// Lena Khalidi
// Problem 5: conversion

#include <iostream>
using namespace std;

// prints meters and centimeters to screen
// parameters: meters and centimeter
void displayConversion(float m, float c){
  cout << "The length in meters: " << m << endl;
  cout << "The length in centimeters: " << c << endl;

}

// calculates conversions
void calcConversion(float feet, float inches){
  float meters;
  float centimeters;
  meters = feet * 0.3048;
  centimeters = inches * 2.54;
  displayConversion(meters, centimeters);
}

// reads in feet and inches from user input
void getUserInput(){
  float lengthFeet;
  float lengthInches;
  cout << "Enter a length (feet): ";
  cin >> lengthFeet;
  cout << "Enter a length (inches): ";
  cin >> lengthInches;
  calcConversion(lengthFeet, lengthInches);
}

// calls getUserInput
// loops until user wants to quit
int main(){
  string userResponse = "";
  bool keepRunning = true;
  while(keepRunning){
    getUserInput();
    cout << endl;
    cout << "Would you like to repeat this calculation with new input values? " << endl;
    cout << "Press any key to continue, or 'exit' to end the program." << endl;
    cin >> userResponse;
    if(userResponse == "exit"){
      keepRunning = false;
    }
  }

  return 0;
}
