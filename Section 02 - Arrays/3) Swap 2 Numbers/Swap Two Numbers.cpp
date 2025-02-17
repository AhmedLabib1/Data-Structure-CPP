#include <iostream>

using namespace std ;

int main ()
{
    // way 1 to swap 2 Numbers
    int a, b; // 5 10
    cin >> a >> b ;

    cout << "Before Swapping" << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;

    int Temp = a;
    a = b;
    b = Temp;

    cout << "After Swapping" << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;

    cout << "===============================" << endl ;
    // way 2 to swap 2 Numbers
    int x, y;
    cin >> x >> y ;

    cout << "Before Swapping" << endl ;
    cout << "x = " << x << endl ;
    cout << "y = " << y << endl ;
// x = 5      y = 10

    y = y+x;
    x = y-x;
    y = y-x;

    cout << "After Swapping" << endl ;
    cout << "x = " << x << endl ;
    cout << "y = " << y << endl ;

    cout << "===============================" << endl ;
    // way 3 to swap 2 Numbers
    int i, j;
    cin >> i >> j ;

    cout << "Before Swapping" << endl ;
    cout << "i = " << i << endl ;
    cout << "j = " << j << endl ;

    i = i^j;
    j = i^j;
    i = i^j;

    cout << "After Swapping" << endl ;
    cout << "i = " << i << endl ;
    cout << "j = " << j << endl ;

    cout << "===============================" << endl ;
    // way 4 to swap 2 Numbers (using inbuilt function)
    int k, z;
    cin >> k >> z;

    cout << "Before Swapping" << endl ;
    cout << "k = " << k << endl ;
    cout << "z = " << z << endl ;

    swap(k, z);

    cout << "After Swapping" << endl ;
    cout << "k = " << k << endl ;
    cout << "z = " << z << endl ;
}
