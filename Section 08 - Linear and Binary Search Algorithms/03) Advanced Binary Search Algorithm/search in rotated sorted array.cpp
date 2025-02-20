#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> vec, int size, int target) {
    int s = 0, e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        // Check if target is found
        if (vec[mid] == target) return mid;

        // Left half is sorted
        if (vec[s] <= vec[mid])
        {
            // Target is within left sorted range
            if (vec[s] <= target && target < vec[mid]) e = mid - 1;
            else                                       s = mid + 1;
        }

        // Right half is sorted
        else if (vec[mid] <= vec[e])
        {
            // Target is within right sorted range
            if (vec[mid] < target && target <= vec[e]) s = mid + 1;
            else                                       e = mid - 1;
        }
    }

    return -1; // Target not found
}

int main()
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

    cout << "\n\nEnter key you want to find: ";
    cin >> key;

    int result = search(vec, size, key);

    if (result != -1) cout << "key found at index " << result << endl;
    else              cout << "key not found" << endl;
}