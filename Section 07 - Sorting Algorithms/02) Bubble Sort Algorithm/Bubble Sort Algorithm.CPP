#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void BubbleSort(vector<int>& vec)
{
    int n = vec.size();
    bool swapped = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (vec[j] > vec[j+1])
            {
                swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
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
            vec[i] = n - i;
        }

        auto start = high_resolution_clock::now();
        BubbleSort(vec);  // Using Bubble Sort here
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        // Time Complexity
        cout << "Vector size: " << n << ", Time taken by bubble sort: " << duration.count() << " microseconds" << endl;
    }
}