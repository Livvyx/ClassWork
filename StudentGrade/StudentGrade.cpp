
//Olivia Walker

//Student Grading System Program using Void(user defined function)

/*Writing a program that is using a function to produce the result of a 
Student. if the grade is greater than or equal to 50, then the student has 
"passed" otherwise else they have "failed"*/

#include <iostream>
using namespace std;

void student_Grade(float grade) {

    if (grade >= 50) {
        cout << endl << "You Have Passed!\n" << endl;
    }
    else if(grade < 50){

        cout << endl << "You have Failed!\n" << endl;
            


    }
   

    


}

int main()
{
    float grade;
    cout << "\n\tPlease Enter your Grade:" << endl;
    cin >> grade;
    cout << "[ - - - - - - - - - - - - - - - - - - ]\n" << endl;
 
   



    student_Grade(grade);
    
}


