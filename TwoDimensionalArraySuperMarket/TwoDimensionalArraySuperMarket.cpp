
//Olivia Walker
//Processing supermarket details via two dimensional arrays
//writing a c++ program to store the details of a supermarket items and process it using functions
//and two dimensional arrays

#include <iostream>
#include <string>
using namespace std;

// Things to remember!
/*
1. Converting string to float (string cannot be calculated as is a straight up word)
2. Nested loops
3. profit = selling price - cost price
*/
string find_profit(string item[5][10]) {

    int i, j;
    float selling[5][10], cost[5][10], profit[5][10];


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            selling[i][j] = stof(item[i][3]);
            cost[i][j] = stof(item[i][2]);
            profit[i][j] = selling[i][j] - cost[i][j];
            item[i][6] = to_string(profit[i][j]);
            
        }
    }

    return(item[i][6]);

}


int main()
{
    cout << "\n- - - - This Program is to process Supermarket Products - - - -\n" << endl;
    string item[5][10];
    int i, j;
    //input
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            if (j == 0) {
                cout << "\n\tEnter item code: ";
                cin >> item[i][j]; 
            }
            if (j == 1) {
                cout << "\n\tEnter item name: ";
                cin >> item[i][j];
            }
            if (j == 2) {
                cout << "\n\tEnter item price: ";
                cin >> item[i][j];
            }
            if (j == 3) {
                cout << "\n\tEnter item selling price: ";
                cin >> item[i][j];
            }
            if (j == 4) {
                cout << "\n\tEnter item stock: ";
                cin >> item[i][j];
            }
            if (j == 5) {
                cout << "\n\tEnter item re order: ";
                cin >> item[i][j];
            }
        }
    }

    // output
    cout << endl;
    for (i = 0; i < 2; i++) { // i++ is the same as i = i + 1 basically :D
        for (j = 0; j < 6; j++) {
            cout << item[i][j] << "\t";
        }
        cout << "\n";
    }

    //Calling find profit function
    find_profit(item);



}


