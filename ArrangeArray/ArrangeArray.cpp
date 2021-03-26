// ArrangeArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string game[10] = { "ark survival evolved", "apex legends", "beasts of bermuda", "minecraft", "the isle", "call of duty", "jackbox", "realm royale", "fortnite", "the forest, apex legends, theisle"};
    int i, j;
    string temp;
    //arranging in alpha order
    cout << "\n\nascending order\n";
    cout << "\n **************\n";

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (game[i] > game[j]) {
                temp = game[i];
                game[i] = game[j];
                game[j] = temp;
                
            }
        }
    }
   
     // displaying the arranged array strubg arat
    for (i = 0; i < 10; i++) {
        cout << "\n" << game[i];
    }
    cout << "\n\ndescending order\n";
    cout << "\n **************\n";
    //arranging in descending order of alphabete
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (game[i] < game[j]) {
                temp = game[i];
                game[i] = game[j];
                game[j] = temp;

            }
        }
    }
        // displaying the arranged array strubg arat
        for (i = 0; i < 10; i++) {
            cout << "\n" << game[i];
        }
        cout << "\n\nfiltered only the isle\n";
        cout << "\n**************\n";
    //display only for the isle
        for (i = 0; i < 10; i++) {
            if (game[i] == "the isle") {
                cout << "\n" << game[i];
            }

            
        }
}


