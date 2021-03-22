// PrimeNumberLab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isprime(int i) { // it will return true or false if the number is or isnt prime.

    for (int j = 2; j * j <= i; j++) // goes through every single number comparing to j to find the final prime number.

        if (i % j == 0)
            break;
        else if (j + 1 > sqrt(i)) {
            return true;

        }
    return false;
}

int main()
{
    int start, end, total = 0;
    cout << "enter the first value " << endl;
    cin >> start;
    cout << "enter the second value" << endl;
    cin >> end;

    if (start > end) {


        cout << " your second value must be greater then your first" << endl;
        return 1;
    }

    cout << "list and value of prime numbers below" << endl;

    for (int i = start; i <= end; i++) { // showing the entire total for the prime numbers
        if (isprime(i)) {
            cout << i << endl;
            total++;

        }



    }

    cout << "total prime numbers" << total;
    return 0;
}

