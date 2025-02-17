#include <iostream>

using namespace std;

int main()
{
    int Size ;
    cin >> Size ;

    int arr[Size];

    for (int i = 0 ; i < Size ; i++)
    {
        cin >> arr[i];
    }

    int Sum = 0;

    for (int i = 0 ; i < Size ; i++)
    {
        Sum += arr[i] ;
    }

    cout << "Sum is: " << Sum << endl ;

    return 0;
}
