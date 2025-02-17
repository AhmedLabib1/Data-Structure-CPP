#include <iostream>

using namespace std;

int number_of_digits(int n)
{
    // Base case: if n becomes 0 or less, stop recursion
    if (n <= 0) return 0;

    // Recursive case: Count the current digit and call the function with n/10
    return 1 + number_of_digits(n / 10);
}

int main()
{
    int n;
    cin >> n;

    // Handle negative numbers to count digits correctly
    n = abs(n);

    int result = number_of_digits(n);
    cout << result << endl;

    return 0;
}
