#include <iostream>
#include <ctime>
#include <cstdlib>//standard library header file.
//#include <stdlib.h> // used in 'c' Language
using namespace std;



int main()
{
   // char c;
   // int result;



    //cout << "Enter a character to get ASCII code\n";
   // cin >> c;
   // result = int(c);
   // cout << "\nASCII code of " << c << " is " << result;

    // typecasting
   // float result1 = (float)result;
   // cout << "\n\ntype casted value of result is: " << result1;




    /*
    
    int x;
    cout << "\n\nEnter the value of x: \t";
    cin >> x;
    //absolute value of 5 is 5 and -5 is also 5 \. it removes the sign
    cout << "\n the value of x is\t" << abs(x);
    */



    // random number
    int myRandomNumber;
    int i;
    for (i = 0; i < 5; i++) {
        myRandomNumber = (rand() % 20 + 1);
       // srand((unsigned)time(0));
        
        cout << "\n the random number generate by my program is\t" << myRandomNumber;
    }
    //swapping values of two variables
    int x = 5;
    int y = 3;
    int z; // temporary variable to swap two values

    z = x;
    x = y;
    y = z;
    cout << "\n the swapped value of x and y are " << x << y;

    return 0;
}
