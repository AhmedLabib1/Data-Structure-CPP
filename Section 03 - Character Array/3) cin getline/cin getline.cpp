#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() > str2.length()) cout << str2;
    else if (str1.length() < str2.length()) cout << str1;
    else
    {
        if (str1 < str2)cout << str1;
        else          cout << str2;
    }

    return 0;
}
