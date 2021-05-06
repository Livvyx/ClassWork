
    // olivia walker

    /* - storing names and grades of 3 students in the main function - */

    //ALGORITHM

    /*1. Input name and 3 grades
      2. call find_sum(x,y,z) and store it in sum
      3. call find_average(sum) and store it in average
      4. call find_result(average) and output the result*/

#include <iostream>
#include <cstring>
using namespace std;

// SUM CALCULATION
float find_sum(float p1, float p2, float p3) { 
    float sum = p1 + p2 + p3;
    return (sum);
}

// AVERAGE CALCULATION
float find_average(float sum) {
    return (sum / 3);
}

// OUTPUT FINAL RESULT TO USER
void find_result(float average, string name) {
    if (average >= 80 && average <= 100) {
        cout << "Congratulations, " << name << ". You have earned a distinction!";
    }
    else if (average >= 50 && average < 80) {
        cout << "Congratulations, " << name << ". You have passed!";
    }
    else if (average < 50 && average >= 0) {
        cout << "Sorry, " << name << ". You have not earned enough points to pass.";
    }
    else {
        cout << "//ERROR// Average grade was not between 0-100.";
    }
}

int main()
{
    string student_name, result;
    float paper1, paper2, paper3;
    float sum;
    float average;

    // TAKING USER INPUT
    cout << " Please enter your name: ";
    cin >> student_name;
    cout << " \n Enter students grades for the three papers: ";
    cin >> paper1 >> paper2 >> paper3;

    cout << "\n===================================================================";

    // CALCULATING SUM
    sum = find_sum(paper1, paper2, paper3);
    cout << "\n SUM: " << sum;

    // CALCULATING AVERAGE
    average = find_average(sum);
    cout << "\n GRADE AVERAGE AVERAGE: " << average;

    // OUTPUTTING FINAL RESULT
    cout << "\n FINAL GRADE: ";
    find_result(average, student_name);

    cout << "\n===================================================================\n";

    return 0;
}

