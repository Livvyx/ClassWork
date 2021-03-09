// BasicBlocks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
#define PI 3.14; // this is a constant definition that cannot be changed 
//variables constants, operators, expressions, hierachy of expressions

int main()
{
	//variables are names given to values to be stored; it should be declared before use
	int age; //declaring a variable called age
    string myName, myname = "Olivia"; //declaring a variable called as "myName" which is different from "myname"
	int yourAge = 17; //initializing a variable with a value; int is integer
	float priceBread = 2.75; //initializing a float type of variable
	char myCurrency = '$';

	float radius, area; 
     system("color DF"); 

	 cout << "Give me the radius of a circle: ";
	 cin >> radius;
	 area = PI * radius * radius;
	 cout << " Enter your age ";
	 cin >> age;
	 cout << " My age is " << age << endl; //endl is to break the line

	 // taking myName from user
	 cout << "\n give your name ";
	 cin >> myName;
	 cout << "\nThe value of myName is " << myName;
	 cout << "\nThe value of myname is " << myname;
	 cout << "\n *****************";

	 //displaying the float value
	 cout << "\n The price of bread is " << myCurrency << priceBread << endl;




}