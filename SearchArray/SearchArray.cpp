// SearchArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string names[6] = { "sam", "stacy","rosy", "sam", "david", "sam"};
    string searchName;
    int i;
    bool flag = false;
    int countsam = 0;

    //receive the name to be searched from the user
    cout << "\n Please enter the name you want to search in the name list";
    cin >> searchName;

    // run through the loop to search if searchName exists
    // case: 1 run through the loop to search if searchName exists
    // case 2: find how many sam is in the list
    for (i = 0; i < 3; i++) {
        if (names[i] == searchName) {
            ++countsam;
            flag = true;

            //break;
        }
        else {
            flag = false;
        }
        if (flag) {
            cout << "\n the name exists in the list";
        }
        else {
            cout << "\n the name does not exist in the list";
        }
    }
}
