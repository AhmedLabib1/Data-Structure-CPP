// Selection Sort Implementation & Experimental Analysis
#include <iostream>
#include <vector>
#include <chrono>

/*
    Mrege Sort Algorithm
   ======================
   is a divide-and-conquer algorithm that recursively divide an array into two halves,
   sorts them separately and then merge them back together. It's a stable sorting algorithm

    Merge Sort Time Complexity: O(n log n) (in all cases: worst, best, and average)
    Merge Sort Space Complexity: O(n) due to the extra space required for left and right subarrays.


    The code consists of three main parts:
    ======================================
    1- mergeSort function: Recursively divides the array into halves.
    2- merge function: Merges two sorted subarrays into one sorted array.
    3- main function: Calls mergeSort and prints the sorted array.
*/

using namespace std;
using namespace std::chrono;

void merge(vector<int>& vec, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftVec[n1], rightVec[n2];

    for (int i = 0; i < n1; i++) leftVec [i] = vec[left + i];
    for (int j = 0; j < n2; j++) rightVec[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftVec[i] <= rightVec[j])
        {
            vec[k] = leftVec[i];
            i++;
        }

        else
        {
            vec[k] = rightVec[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vec[k] = leftVec[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        vec[k] = rightVec[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& vec, int left, int right){
    if (right > left){ // Base case: the subarray has only one element
        int mid = left + (right - left) / 2;

        mergeSort(vec, left, mid);
        mergeSort(vec, mid + 1, right);

        merge(vec, left, mid, right);
    }
}

int main () {
    for (int n = 10; n <= 10000000; n *= 10) {
        vector<int> vec(n);

        // Initialize the vector in reverse order for worst-case input (w.c.s)
        for (int i = 0; i < n; i++) {
            vec[i] = n - i;
        }

        auto start = high_resolution_clock::now();
        mergeSort(vec, 0, n - 1);  // Using Merge Sort here
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        // Output the time taken by Merge Sort
        cout << "Vector size: " << n << ", Time taken by merge sort: " << duration.count() << " microseconds" << endl;
    }
}