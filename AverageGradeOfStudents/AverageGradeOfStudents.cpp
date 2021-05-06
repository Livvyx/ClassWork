// AverageGradeOfStudents.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, id;
	int n;
	int a, b, c;
	int i = 0;
	int sum, avg, max = 0, min = 1000;


	cout << "\n How many students are in the class? \t";
	cin >> n;

	while (i < n) {
		cout << "\n What is your name?";
		cin >> name;

		cout << "\n What is your student id?";
		cin >> id;

		cout << "\n What are your scores for assessment 1, 2, & 3?";
		cin >> a >> b >> c;

		sum = a + b + c;

		avg = sum / 3;

		cout << name << " " << a << " " << b << " " << c << " " << sum << " " << avg;

		if (avg > max) {
			max = avg;
			if (avg < min) {
				min = avg;

			}
			
		}
		 cout << "\n"<< min  << " " << max;

	}




	
	


}

