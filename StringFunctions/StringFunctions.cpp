// StringFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
//------------//
   //STRING//
//------------//

 //-------------------------------------------//

	//------------//
	//Concatenation
	//------------//


	//string greeting = "Hello";

	//string firstName = "Olivia\n";
	//string middleName = "Joanne\n";
	//string lastName = "Doe\n";
	//
	//string fullName = firstName.append(middleName + lastName);
	//cout << fullName;

//---------------------------------------------------//

	//************************//
	//Numbers and Strings
	//************************//

	/*int x = 10;
	int y = 20;
	int z = x + y;
	cout << x + y;*/
	// z will be 30 (an integer)

	// if you add two strings the result will be a string concatenation 
	/*string x = "\n 10";
	string y = "\n 20";
	string z = "\n x + y";*/


	//---------------------------------------------------//


	//------------//
	//String Length
	//------------//

	//******Length function********//

	/*string txt = "Minimilist";
	cout << "The length of the txt string is: " << txt.length();*/


	/*some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). 
	It is completely up to you if you want to use length() or size():*/


	//********Size Function*********//

	/*string txt = "Yoobee colleges";
	cout << " The length of the txt string is: " << txt.size();*/
	
	//---------------------------------------------------//

	//------------
	//Access Strings
	//------------

	//prints the first character in myString:

	/*string myString = "Hello";
	cout << myString[0];*/

	//outputs H//

	// outputs the second character in myString//

	//string myString = "Algebra";
	//cout << myString[1];

	//****Changing String Characters*****//

	/*string myString = "Hello";
	myString[0] = 'J';
	cout << myString;*/
	
	//outputs jello instead of hello//

	//---------------------------------------------------//
	
	//------------------//
	//User Input Strings
	//-----------------//

	//string firstName;
	//cout << "Type your first name:";
	//cin >> firstName; //get user input from your keyboard
	//cout << "your name is:\n" << firstName;


	//---------------------------------------------------//

	//------------------//
	//Omitting Namespace
	//-----------------//

   	//some C++ programs that runs without the standard namespace library. 
    //The using namespace std line can be omitted and replaced with the std keyword, 
     //followed by the :: operator for string (and cout) objects:

	std::string greeting = "Hello";
	std::cout << greeting;
	return 0;

	//---------------------------------------------------//




}

