#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int>& vec)
{
    int n = vec.size();
    bool swapped = false;
    for (int i = 0; i < n-1; i++) // iterate for each pass
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
    int size;
    cin >> size;

    vector<int> vec(size);

    for (int& i : vec)
    {
        cin >> i ;
    }

    cout << "the original vector values is: " << endl;
    PrintVector(vec);

    BubbleSort(vec);

    cout << "vector values after sorting: " << endl;
    PrintVector(vec);
}