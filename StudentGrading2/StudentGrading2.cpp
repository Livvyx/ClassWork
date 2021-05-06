
//Olivia Walker


        //Type 2

//Student Grading System Program using Void(user defined function) 

/*Writing a program that is using a function to produce the result of a
Student. if the grade is greater than or equal to 50, then the student has
"passed" otherwise else they have "failed"*/

#include <iostream>
using namespace std;

string student_Grade(float grade) {

    if (grade >= 50) {
        return ("passed"); // returns the givenstring to the main function
    }
    else {
        return ("failed");// returns the given string to the main function
    }
}

int main()
{
    float grade;
    cout << "\n\tPlease Enter your Grade:";
    cin >> grade;
    cout << "[ - - - - - - - - - - - - - - - - - - ]\n" << endl;
    string result = student_Grade(grade); //assigning the return value of the function to a variable
   


}
