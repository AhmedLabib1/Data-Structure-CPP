#include <iostream>

using namespace std;

// Print in ascending order
void printNumbers_ascending (int n)
{
    if (n == 0) return; // Base Case

    printNumbers_ascending(n-1);  // Recursive Case
    cout << n << " ";
}

// print in decending order
void printNumbers_descending (int n)
{
    if (n == 0) return; // Base Case

    cout << n << " ";
    printNumbers_descending(n-1); // Recursive Case
}

int main ()
{
    int n;
    cin >> n;

    cout << "in ascending order\n";
    printNumbers_ascending(n);

    cout << "\nin decending order\n";
    printNumbers_descending(n);
}