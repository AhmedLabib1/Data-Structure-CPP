#include <iostream>

using namespace std;

/*
	Two Dimensional Array
	=====================
	arr[3][4]

	3 ==> Number of Rows
	4 ==> Number of Columns

    Given Number of Row is optional but
    Given Number of Column is mandatory

			 col1(0)	 col2(1)	 col3(2)	 col4(4)
	row1(0)  x[0][0]	 x[0][1]	 x[0][2]     x[0][3]
	row2(1)  x[1][0]     x[1][1]     x[1][2]     x[1][3]
	row3(2)  x[2][0]     x[2][1]     x[2][2]     x[2][3]

			col1		col2		col3		col4
	row1     1           2           3           4
	row2     5           6           7           8
	row3     9           10          11          12

*/

int main ()
{
    int arr[3][4];

	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "========================================" << endl;

    // Row Wise
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "========================================" << endl;

	// Column Wise
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}

    return 0;
}
