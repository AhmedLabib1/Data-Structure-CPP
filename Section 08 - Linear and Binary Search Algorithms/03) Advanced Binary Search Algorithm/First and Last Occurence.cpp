#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
    In a sorted array, when an element appears multiple times, we often need to find: 
        - First occurrence of the element.
        - Last occurrence of the element.

    Then, we can use these indices to count the total occurrences of the element.
    
    count = last_index − first_index + 1
*/

int getIndex (const vector<int>& vec, int n, int key, bool findFirst)
{
    int s = 0, e = n-1, last = -1;

    while (s <= e){
        int mid = s + (e - s) / 2;

        if (key == vec[mid])
        {
            last = mid;

            if (findFirst) e = mid - 1;
            else           s = mid + 1;
        }
        else if (key > vec[mid]) s = mid+1;
        else e = mid - 1;
    }
    return last;
}

int main ()
{
    int size, key;

    cout << "Enter vector size: ";
    cin >> size;

    vector<int> vec(size);

    cout << "Enter vector elements: ";
    for (int& i : vec) cin >> i;

    // Ensure vector is sorted
    sort(vec.begin(), vec.end());

    cout << "Sorted vector: ";
    for (int i : vec) cout << i << " ";

    cout << "\n\nEnter key you want to find: ";
    cin >> key;

    int first = getIndex(vec, size, key, true);
    int last = getIndex(vec, size, key, false);

    if (first == -1) cout << "Key not found in array!" << endl;
    else{
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
        cout << "Total occurrences: " << (last - first + 1) << endl;
    }
}