// Olivia Walker

// CS102 Lab 1 

// TASK

/*
create a hangman game demonstrating my skill as follows by the scenario given.

A. Use more than one function call. Ideally (5 functions) one to draw a line, one to
draw the hangman, one to draw a walkman, one to invert the hangman and an
another one to play.

B. Atleast one function without parameter(s).

C. Atleast one function with parameter(s).

D. Atleast one function without any return value.

E. Atleast one function with a return value.

F. Assign a function to a variable.


*/

// ALGORITHM

/* 
1. Display a welcome message as shown in the output.
2. underline the welcome message using a function with a parameter (line(66)).
3. Call a function to draw hangman (draw_hangman())
4. Assign the function play (play()) to a variable called answer. (hunt:play() returns if 
player is correct or wrong after 3 guesses).
5. Display the answer.
6. if answer is wrong, then call function to display an inverted hangman. (inverted_hangman), else call a function to display walkman(walk_man()).
*/



#include <iostream>
#include <string>
using namespace std;

//function with dummy parameter
void Under_Line(int line) {
    int i;
    cout << "\t";

    for ( i = 0; i < line; i++){
        cout << "-";
    }
    cout << endl;
}

void draw_hangman() {
    cout << "\t";
    cout << " ____" << endl;
    cout << "\t";
    cout << "|    |" << endl;
    cout << "\t";
    cout << "|    0" << endl;
    cout << "\t";
    cout << "|   \\|/" << endl;
    cout << "\t";
    cout << "|    |" << endl;
    cout << "\t";
    cout << "|   / \\" << endl;
    cout << "\t";
    cout << "|       " << endl;
    cout << "\t";
    cout << "---" << endl;

}

void inverted_hangman() {
    cout << "\t";
    cout << " ____" << endl;
    cout << "\t";
    cout << "|    |" << endl;
    cout << "\t";
    cout << "|    |" << endl;
    cout << "\t";
    cout << "|   /|\\" << endl;
    cout << "\t";
    cout << "|    |" << endl;
    cout << "\t";
    cout << "|   / \\" << endl;
    cout << "\t";
    cout << "|     0  " << endl;
    cout << "\t";
    cout << "---" << endl;
}

void walk_man(){

    cout << "\t" << endl;
    cout << "O" << endl;
    cout << "\t" << endl;
    cout << "\\|/" << endl;
    cout << "\t" << endl;
    cout << "|" << endl;
    cout << "\t" << endl;
    cout << "/\\" << endl;
}

string play_hangman(string result) {

    char guess;
    int i;

    for (i = 0; i < 3; i++) {
        cout << "\tguess the missing letter in Yo_bee : ";
        cin >> guess; 
    
    if (guess == 'o' || guess == 'O') {
        result = "yes";
        cout << "\t Your Guess Was correct!" << endl;
        break;
       
    }
    else{
        while (i == 2) {
            result = "no";
            break;

        }
        cout << "\t Sorry Try Again! :(" << endl;
    }
    }
    
    return result;
}





int main()
{
    int i, p = 3;
    string result = "yes";

    cout << "\tWelcome To HangMan! This Game Is To CheckOut Your Spelling Skills!" << endl;

    //calling function
    Under_Line(66);

    draw_hangman();

    play_hangman(result);
 
    inverted_hangman();

    walk_man();


}


