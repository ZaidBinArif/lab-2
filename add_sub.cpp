#include <iostream>;

using namespace std;

void subtraction()
{

	int r, c, a[5][5], b[5][5], sub[5][5], i, j;

	cout << "_______SUBTRACTION_______\n";

	cout << "Enter number of rows (between 1 and 5): ";
	cin >> r;

	cout << "Enter number of columns (between 1 and 5): ";
	cin >> c;

	cout << endl << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	// Storing elements of second matrix entered by user.
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

	// Adding Two matrices
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sub[i][j] = a[i][j] - b[i][j];

	// Displaying the resultant sum matrix.
	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sub[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}


}

void addition()
{
	int r, c, a[5][5], b[5][5], sum[5][5], i, j;

	cout << "_______ADDITION_______\n";

	cout << "Enter number of rows (between 1 and 5): ";
	cin >> r;

	cout << "Enter number of columns (between 1 and 5): ";
	cin >> c;

	cout << endl << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	// Storing elements of second matrix entered by user.
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

	// Adding Two matrices
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];

	// Displaying the resultant sum matrix.
	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sum[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}


}
int main() {
	subtraction();
	addition();
}