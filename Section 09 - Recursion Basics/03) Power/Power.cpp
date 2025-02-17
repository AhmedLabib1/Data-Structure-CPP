#include <iostream>

using namespace std;

int pow(int x, int n)
{
    if (n == 1) return x; // Base Case

    return x * pow(x, n-1); // Recursive Case
}

int main ()
{
    int x, n;
    cin >> x >> n;

    int result = pow(x, n);
    cout << result << endl;
}