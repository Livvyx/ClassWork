//Olivia Walker
//Function Exercises/Function Call

#include <iostream>
using namespace std;

//function definition
// void means nothing is returned from the function
//void greeting() {
//
//    cout << "\n\tWussup Gangsta Gorrila Lookin chupapi" << endl;
//
//    cout << "\n\tHoyyyyaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
//
//
//}

//void add_gorillaNumbers() {
//    float x, y;
//    cout << "\n enter the two gorilla numbers to add: ";
//    cin >> x >> y;
//    cout << "\n the sum of the given gorilla numbers is " << (y + x);
//}
//
//void diff_BigGorillaNumbers() {
//    float x, y;
//    cout << "\n enter the two gorilla numbers to find the difference: ";
//    cin >> x >> y;
//    cout << "\n the difference of the given gorilla numbers is " << (y - x);
//}
//
//void weirdo_BigScaryGorillaNumbers() {
//    float x, y;
//    cout << "\n enter the two gorilla numbers to multiply: ";
//    cin >> x >> y;
//    cout << "\n the multiplication of the given gorilla numbers is " << (y * x);
//}

void Triangle_BigScaryGiganticGorillaGobstoppingNumbers() {
   

    int rows;

    cout << "\nEnter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
}


int main()
{
    
    /*greeting();*/ //function call

    /*add_gorillaNumbers();



   diff_BigGorillaNumbers();

   weirdo_BigScaryGorillaNumbers();*/

   Triangle_BigScaryGiganticGorillaGobstoppingNumbers();

}


