#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Time Complexity: O(n²) - Always performs n² comparisons and n-1 swaps.
// Space Complexity: O(1) - In-place algorithm, no extra space used.

void SelectionSort(vector<int>& vec)
{
    int n = vec.size();
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if (vec[j] < vec[minIndex])
            {
                minIndex = j;
            }
        }

        swap(vec[i], vec[minIndex]);
    }
}

void PrintVector(const vector<int>& vec)
{
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main ()
{
    for (int n = 10; n <= 1000000; n *= 10)
    {
        vector<int> vec(n);

        // Initialize the vector in reverse order for worst-case input (w.c.s)
        for (int i = 0; i < n; i++)
        {
            vec[i] = n-i;
        }

        auto start = high_resolution_clock::now();
        SelectionSort(vec);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        // Time Complexity
        cout << "vecotr size: " << n <<", Time taken by selection sort: " << duration.count() << endl;
    }
}