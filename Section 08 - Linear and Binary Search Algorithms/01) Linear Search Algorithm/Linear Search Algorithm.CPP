#include <iostream>
#include <vector>

using namespace std;

/*
?   Definition:
    Linear search is a simple searching algorithm used to find the position of a target
    element (key) in a list or array. It sequentially checks each element of the array
    until the desired element is found or the end of the list is reached.

?   Key Characteristics:
    Method: Sequential comparison of each element.
    Works on: Both sorted and unsorted arrays.
    Simplicity: Easy to implement and understand.
    Efficiency: Not efficient for large datasets due to its O(n) time complexity.
                Useful for small datasets or when the array is not sorted.

*/

int linearSearch(vector<int> vec, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == key) return i;
    }

    return -1;
}

int main ()
{
    int n, key;
    cin >> n;

    vector<int> vec(n);

    // RNAGED LOOP
    for (int& i : vec)
    {
        cin >> i;
    }

    cout << "Enter array key" << endl;
    cin >> key;

    int result = linearSearch(vec, n, key);

    if (result != -1) cout << "Element is found at position: " << result << endl;
    else              cout << "Element not found in the vector" << endl;
}