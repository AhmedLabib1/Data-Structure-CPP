#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 1,2,3,4,5,
                  1,2,3,4,5,
                  1,2,3,4,5,
                  1,2,3,4,5 };

    // Display the size (in bytes) of a single element of the array
    cout << "size of arr[0]: " << sizeof(arr[0]) << endl;

    // Display the total size (in bytes) of the array
    cout << "size of arr: " << sizeof(arr) << endl;

    // Calculate and display the total number of elements in the array
    // by dividing the total size of the array by the size of a single element
    cout << "number of elements in arr: " << sizeof(arr) / sizeof(arr[0]) << endl;

    // Calculate and display the total number of elements in the array
    // using pointer dereferencing (*arr is equivalent to arr[0])
    cout << "number of elements in arr: " << sizeof(arr) / sizeof(*arr) << endl;

}