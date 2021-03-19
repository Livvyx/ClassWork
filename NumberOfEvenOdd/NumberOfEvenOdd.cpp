// NumberOfEvenOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sumEven = 0; 
    int sumOdd = 0;
    int n, x, i;

    cout << "how many numbers do you want to check?";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "\n Enter the number ";
        cin >> x;

        if (x % 2 == 0) {
            sumEven++;
        }
        else {
            ++sumOdd;
        }
    }
    cout << "\n the number of even numbers in the list is \t" << sumEven;
    cout << "\n the number of even numbers in the list is \t" << sumOdd;
}


