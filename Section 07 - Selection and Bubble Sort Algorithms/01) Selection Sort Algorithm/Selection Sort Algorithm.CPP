#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

void SelectionSort(vector<int>& vec)
{
    int n = vec.size();
    for (int i = 0; i < n-1; i++)
    {
        int samllest = i;

        for (int j = i+1; j < n; j++)
        {
            if (vec[j] < vec[samllest])
            {
                samllest = j;
            }
        }

        swap(vec[i], vec[samllest]);
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
    int size;
    cin >> size;

    vector<int> vec(size);

    for (int& i : vec)
    {
        cin >> i ;
    }

    cout << "the original vector values is: " << endl;
    PrintVector(vec);

    SelectionSort(vec);

    cout << "vector values after sorting: " << endl;
    PrintVector(vec);

}