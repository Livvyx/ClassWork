#include <iostream>
using namespace std;

//function
void arrange_in_ascending(int y[], int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < 5; j++) {
            if (y[i] > y[j]) {
                temp = y[i];
                y[i] = y[j];
                y[j] = temp;
            }
        }
    }
    cout << "\nThe sorted number list is:";
    cout << "\n -------------------\n";
    for (i = 0; i < 5; i++) {
        cout << y[i] << "\t";
    }
}
int main()
{
    int x[5];
    int i;
    //input
    for (i = 0; i < 5; i++) {
        cout << "\n Please enter a number! :D : ";
        cin >> x[i];
    }
    cout << "\nThe inputted list is:";
    cout << "\n -------------------\n";
    for (i = 0; i < 5; i++) {
        cout << x[i] << "\t";
    }
    arrange_in_ascending(x, 5);
}


