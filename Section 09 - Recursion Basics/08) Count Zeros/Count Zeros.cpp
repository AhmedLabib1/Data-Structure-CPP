#include <iostream>

using namespace std;

int count_zeros (int n)
{
    int count = 0;
    if (n <= 0) return 0;

    int smalLAns = count_zeros(n/10);

    if (smalLAns == 0) count++;
}

int main ()
{

}