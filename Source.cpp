#include <iostream>;

using namespace std;

void matrixmul() {
	int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

	cout << "Enter rows and column for first matrix (between 1 to 10): ";
	cin >> r1 >> c1;

	cout << "Enter rows and column for second matrix (between 1 to 10): ";
	cin >> r2 >> c2;

	while (c1 != r2)
	{
		cout << "column of first matrix not equal to row of second.\n\n";
		cout << "Enter rows and column for first matrix: ";
		cin >> r1 >> c1;
		cout << "Enter rows and column for second matrix: ";
		cin >> r2 >> c2;
	}

	printf("\nEnter elements of matrix 1:\n");
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout << "Enter elements " << i + 1 << j + 1 << ":";
			scanf_s("%d", &a[i][j]);
		}

	printf("\nEnter elements of matrix 2:\n");
	for (i = 0; i < r2; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << "Enter elements " << i + 1 << j + 1 << ":";
			scanf_s("%d", &b[i][j]);
		}

	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			result[i][j] = 0;
		}

	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
			for (k = 0; k < c1; ++k)
			{
				result[i][j] += a[i][k] * b[k][j];
			}

	// Displaying the result
	printf("\nOutput Matrix:\n");
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			printf("%d  ", result[i][j]);
			if (j == c2 - 1)
				printf("\n\n");
		}
}


void transpose()
{
	int A[10][10], m, n, i, j;
	cout << "Enter rows and columns of matrix : ";
	cin >> m >> n;
	cout << "Enter elements of matrix : ";
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> A[i][j];
	cout << "Entered Matrix : \n ";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << A[i][j] << " ";
		cout << "\n ";
	}
	cout << "Transpose of Matrix : \n ";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << A[j][i] << " ";
		cout << "\n ";
	}
	getchar();
	getchar();
}

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
	transpose();
	matrixmul();
}