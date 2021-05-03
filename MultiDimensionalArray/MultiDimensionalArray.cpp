
//Olivia Walker

//Learning more about multidimension - also refer to notes in book.
//taking from the user

#include <iostream>
#include <cstring>
using namespace std;



int main()
{

    // ---- Multi Dimensional Array ---- //



    //string students[5][2] = { "john", "16", "Larissa", "48", "Keith", "23", "Olivia", "18", "Jakob", "70" }; //storing names 
    string working_hours[7][2];
    int i, j;
    
    //input hours

    cout << "please enter the week days and number of hours worked";
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 2; j++) {
            cin >> working_hours[i][j];

        }
        cout << "\n";
    }

    //output
    for (i = 0; i < 7; i++) { //refers to the row
        for (j = 0; j < 2; j++) { //Refers to collumn
            cout << working_hours[i][j] << "\t"; // using /t allows for spacing between the collums and rows
        }

        cout << "\n";


    }

    cout << "\n";
    return 0;

    // ---- Multi Dimensional Array ---- //
}


