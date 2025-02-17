#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Time Complexity of Linear Search is ==> O(n)
    Time Complexity of Binary Search is ==> O(log(n))
    so Binary Search is Better.

    Binary Search work only in sorted arrays
*/

int binarySearch(vector<int> vec, int n, int key)
{
    int s = 0;
    int e = n - 1;
    
    while(s <= e)
    {
        // to avoid overflow
        int mid = s + (e - s) / 2;

        if (key == vec[mid]) return mid;

        else if (key < vec[mid]) e = mid - 1;

        else                     s = mid + 1;
    }

    return -1;
}

int main ()
{
    
    int size, key;

    cout << "Enter vector size: ";
    cin >> size;

    vector<int> vec(size);

    cout << "Enter vector values: ";
    for (int& i : vec)
    {
        cin >> i;
    }

    // Ensure Vector is Sorted
    sort(vec.begin(), vec.end());

    cout << "\nSorted Vector: " ;
    for (int i : vec)
    {
        cout << i << " ";
    }

    cout << "\n\nEnter key you want found: ";
    cin >> key;

    int result = binarySearch(vec, size, key);

    if (result != -1) cout << "key found at index " << result << endl;
    else              cout << "key not found" << endl;

}