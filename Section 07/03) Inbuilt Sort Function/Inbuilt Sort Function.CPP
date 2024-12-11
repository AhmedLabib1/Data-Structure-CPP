#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    // Sorting an array
    cout << "----- Sorting an array -----" << endl;
    const int Size = 5; // Define the size of the array
    int arr[Size];      // Declare an array of size 5

    // Input values into the array
    cout << "Enter 5 integers for the array: ";
    for (int& i : arr) cin >> i;

    // Sort the array using std::sort
    sort(arr, arr + Size);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int& i : arr) cout << i << " ";
    cout << endl;


    // Sorting a vector
    cout << "\n----- Sorting a vector -----" << endl;
    vector<int> vec(5); // Declare a vector of size 5

    // Input values into the vector
    cout << "Enter 5 integers for the vector: ";
    for (int& i : vec) cin >> i;

    // Sort the vector using std::sort
    sort(vec.begin(), vec.end());

    // Output the sorted vector
    cout << "Sorted vector: ";
    for (int& i : vec) cout << i << " ";

}
