// Olivia Walker

//Matrix functions

#include <iostream>
using namespace std;

//output matrix function

void output_matrix(int Mat[2][2]) {
	int p, q; //Local variables

	//output
	cout << " - - - The Matrix Output - - - " << endl;

	for (p = 0; p < 2; p++) {
		for (q = 0; q < 2; q++) {
			cout << Mat[p][q] << "\t";

		}
		cout << "\n";
	}


}
//adding Matrices
void adding_matrices(char options, int a[2][2], int b[2][2]) {
	int i, j; //local to add_matrices
	int sum[2][2];

	
	//Creating multiplication for user to use for matrice

	if (options == '+') {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				sum[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	if (options == '-') {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				sum[i][j] = a[i][j] - b[i][j];
			}
		}
	}
	if (options == '/') {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				sum[i][j] = a[i][j] / b[i][j];
			}
		}
	}
	if (options == '*') {
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				sum[i][j] = a[i][j] * b[i][j];
			}
		}
	}
	output_matrix(sum); // calling 
}




int main()
{
	char option;
	int Matrix[2][2], MatrixB[2][2];
	int i, j;
	//input for matrix a

	cout << "\n Enter the values for matrix A :\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> Matrix[i][j];
		}
	}

	output_matrix(Matrix); // passing matrix into a function
	



	// - - - input for matrix B - - - //
	cout << "\n Enter the values for matrix B :\n" ;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> MatrixB[i][j];
		}
	}
	output_matrix(MatrixB); // passing matrix into a function

	cout << "Enter Your Chosen Operator(only one) to use for your matrice (+, -, /, *) : \n" << endl;
	cin >> option;
	adding_matrices(option, Matrix, MatrixB); //being calling for adding the matrices
	

	

}


