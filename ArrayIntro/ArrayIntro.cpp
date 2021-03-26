// ArrayIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




int main()
{
    //declare an integer array with 5 different values
    int num[5] = { 5,6,3,0,1};
    int i;
    
    string name[5];
    int age[5];
    cout << num[0] << endl; // index 0 is the beginning of an array
    cout << num[4] << endl;// index 4 refers to the last value in this array
    
    for (i = 0; i < 5; i++) {
        cout << "\n" << num[i];
    }
    //take thenames and ages of 5 people and store it in its respective arrays
   
    for (i = 0; i < 5; i++) {

        cout << "\n Enter the name and age of a person";
        cin >> name[i] >> age[i];
        }
    // printing out the names and ages that is stored in the arrays
    for (i = 0; i < 5; i++) {
        cout << "the name in position \t" << i << " is " << name[i];
        cout << "\n the age in position \t" << i << " is " << age[i];
    }
    
    //changing a value in a array at a particular position
    /*string names[3] = { "sam", "Joel", "rosy"};
    cout << names[1] << endl;
    names[1] = "stacy";
    cout << names[1] << endl;*/


}
