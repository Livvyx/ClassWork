// StringCharArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	
	int i;
	string name = "yoobee";

	for (int i = 0; i < 6; i++) {
		cout << name[i] << endl;
   }
	cout << "\n";
	// changning the littter 3 to 'u'
	name[2] = 'u';

	for (int i = 0; i < 6; i++) {
		cout << "\n" << name[i];
	}
}
//replace the 3rd character by letter "U"
//display the name

