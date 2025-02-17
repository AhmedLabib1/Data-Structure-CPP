#include <iostream>

using namespace std;

/*
    Given a Number of Rows is optional but
    Given a Number of columns is mandatory
*/

void Print_2D_Array (int arr[][2], int Row, int Col)
{
    for (int i = 0 ; i < Row ; i++)
    {
        for (int j = 0 ; j < Col ; j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

int main()
{
    int arr1[][2] = {{1,2},{3,4}};
    Print_2D_Array(arr1, 2, 2);

    cout << "_________________________________ " << endl ;

    int arr2[][5] = {{1,2},{3,4}};

    for (int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            cout << arr2[i][j] << " " ;
        }
        cout << endl;
    }

    cout << "_________________________________ " << endl ;

    int arr3[5][5] = {{1,2},{3,4}};

    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            cout << arr3[i][j] << " " ;
        }
        cout << endl;
    }

    cout << "_________________________________ " << endl ;

    int arr4[5][5] = {0};

    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            cout << arr4[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}
