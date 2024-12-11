#include <iostream>

using namespace std;

int main()
{
    int Size;
    cin >> Size ;

    int arr[Size];

    for (int i = 0 ; i < Size ; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before Reversing" << endl ;

    for (int i = 0 ; i < Size ; i++)
    {
        cout << arr[i] << " " ;
    }

    cout << endl ;

    int s = 0;
    int e = Size - 1;

    while (s <= e)
    {
        swap (arr[s], arr[e]);

        s++;
        e--;
    }

    cout << "Array After Reversing" << endl ;

    for (int i = 0 ; i < Size ; i++)
    {
        cout << arr[i] << " " ;
    }

    return 0;
}
