// AreaOfTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//this program is to find the area of a right angled triangle

int main()
{
	
	int a, b; // a refers to the base and b refers to the height
	float area; //area is a decimal type that is the result of calculation
	cout << "\n \tEnter the value for a(base)\t";
	cin >> a; //taking imput from the user
	cout << "Enter the value for b(height)\t";
	cin >> b; //taking input for the user
	area = (a * b) / 2; //calculation
	cout << "the area of triangle = " << area << "sq.cm" <<endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
