// Selection Sort Implementation & Experimental Analysis
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

/*
_______________________________________________________________________________________
    Quick Sort is an efficient divide-and-conquer sorting algorithm.
    It works by selecting a pivot element and partitioning the array such that:
    ● Elements smaller than the pivot go to the left.
    ● Elements greater than the pivot go to the right.
    ● The pivot is placed in its correct sorted position.
    !It then recursively sorts the left and right subarrays.
_______________________________________________________________________________________
    ?Partitioning Methods:
    ● Lomuto's Partition: Simpler but performs more swaps, making it slower.
    ● Hoare's Partition (Used in this code): Faster, fewer swaps, more efficient.

    !Hoare’s partition is better in terms of performance.
_______________________________________________________________________________________
*/

int partition(vector<int>& vec, int low, int high){
    int pivot = vec[high]; // Use the first element as the pivot
    int i = low - 1;
    int j = high + 1;

    while (true)
    {
        do{ i++; } while(vec[i] < pivot);
        do{ j--; } while(vec[j] > pivot);

        if (i >= j) return j;

        swap(vec[i], vec[j]);
    }
}

void quickSort(vector<int>& vec, int low, int high){
    if (low < high){ // Base case: the subarray has more than one element
        int pivotIndex = partition(vec, low, high);  // Partition the array

        quickSort(vec, low, pivotIndex);      // Sort the left part of the array
        quickSort(vec, pivotIndex + 1, high); // Sort the right part of the array
    }
}

int main() {
    for (int n = 10; n <= 1000000; n *= 10) {
        vector<int> vec(n);

        // Initialize the vector in reverse order for worst-case input (w.c.s)
        for (int i = 0; i < n; i++) {
            vec[i] = n - i;
        }

        auto start = high_resolution_clock::now();
        quickSort(vec, 0, n - 1);  // Using Quick Sort here
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        // Output the time taken by Quick Sort
        cout << "Vector size: " << n << ", Time taken by quick sort: " << duration.count() << " microseconds" << endl;
    }
}