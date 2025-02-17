#include <iostream>

using namespace std;

int sum_of_digits(int n)
{
    int digit = 0, sum = 0;
    if (n <= 0) return 0;
    sum += digit;
    digit = sum_of_digits(n % 10);
    return sum;
}

int mian ()
{
    int n;
    cin >> n;
}