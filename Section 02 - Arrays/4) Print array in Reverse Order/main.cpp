#include <iostream>

using namespace std;

int main()
{
    int Size ;
    cin >> Size ;

    int arr[Size];

    for (int i = 0 ; i < Size ; i ++)
    {
        cin >> arr[i];
    }

    // Normal Print Left ==> Right
    cout << "\nArray in Normal Order" << endl ;

    for (int i = 0 ; i < Size ; i ++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    // Reverse Print Right ==> Left
    cout << "Array in Reverse Order" << endl ;
    
    for (int i = Size - 1 ; i >= 0 ; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
