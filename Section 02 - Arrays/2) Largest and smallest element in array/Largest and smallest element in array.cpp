#include <iostream>
#include <climits>

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

    int largestNumber  = INT_MIN;
    int smallestNumber = INT_MAX;

    for (int i = 0 ; i < Size ; i++)
    {
        if (arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }

        if (arr[i] < smallestNumber)
        {
            smallestNumber = arr[i];
        }
    }

    cout << "Largest Number is: " << largestNumber << endl ;
    cout << "Smallest Number is: " << smallestNumber << endl;

    return 0;
}
