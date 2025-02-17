#include <iostream>
#include <vector>

/*
    Mrege Sort Algorithm
   ======================
   is a divide-and-conquer algorithm that recursively divide an array into two halves,
   sorts them separately and then merge them back together. It's a stable sorting algorithm
   wiht a time complexity of O(n log(n)) & space complexity of O(n)

    The code consists of three main parts:
    ======================================
    1- mergeSort function: Recursively divides the array into halves.
    2- merge function: Merges two sorted subarrays into one sorted array.
    3- main function: Calls mergeSort and prints the sorted array.
*/

using namespace std;

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

int main ()
{
    int size;
    cin >> size;

    vector<int> vec(size);
    for (int& i : vec) cin >> i;

    mergeSort(vec, 0, size-1);

    for (int i : vec) cout << i << " ";
}