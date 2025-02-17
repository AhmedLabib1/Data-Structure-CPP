#include <iostream>

using namespace std;

void Fibonacci_way1 (int n)
{
    int a = 0, b = 1, next;

    cout << a << ", " << b;
    for (int i = 2; i < n; i++)
    {
        next = a+b;
        cout << ", " << next;

        a = b;
        b = next;

    }
}

int Fibonacci_way2 (int n)
{
    // Base Case
    if (n == 1) return 0;
    if (n == 2) return 1;

    return Fibonacci_way2(n-1) + Fibonacci_way2(n-2);
}

int main ()
{
    int n;
    cin >> n;

    cout << "Fibonacci Series" << endl;
    Fibonacci_way1(n);
    cout << "\n\n";

    cout << "Fibonacci Series using Recursion way" << endl;
    cout << Fibonacci_way2(n);
}