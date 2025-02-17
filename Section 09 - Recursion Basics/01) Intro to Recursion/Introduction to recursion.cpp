#include <iostream>

using namespace std;

int fact(int n)
{
    if (n < 0) {
        throw invalid_argument("Factorial of a negative number is undefined.");
    }
    
    if (n <= 1) return 1; // Base Case

    return n * fact(n-1); // Recursive Case
}

int main ()
{
    int n;
    cin >> n;

    int result = fact(n);
    cout << result << endl;
}