#include <iostream>

using namespace std;

int multi (int x, int n)
{
    if (n == 1) return x;

    return x + multi(x, n-1);
}

int main ()
{
    int x, n;
    cin >> x >> n;

    cout << multi(x, n);
}