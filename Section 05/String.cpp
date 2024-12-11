#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

bool compare (string a, string b)
{
    return a > b;
}

int main()
{
    /*
        String is data type and inbuilt class
        string is actually behaves like the character array
        but in character array we have to take care of NULL
        character '\0' and this problem is not found in the String
    */

    cout << "Static string\n\n" ;

    string str1 = "ABC";
    cout << str1 << endl;

    cout << "________________________________" << endl;

    cout << "Static string\n\n" ;

    string str2;
    str2 = "DEF";
    cout << str2 << endl;

    cout << "________________________________" << endl;

    cout << "Dynamic string\n\n" ;

    string *ps = new string;
    *ps = "Ahmed" ;
    cout <<  ps << endl ;
    cout << *ps << endl ;

    cout << "________________________________" << endl;

    cout << "multi_string using vector\nand how to sort string\n\n" ;

    vector<string> str3;

    str3.push_back("Ahmed");
    str3.push_back("Ali");
    str3.push_back("Amr");
    str3.push_back("Tawfeek");

    for (int i = 0 ; i < str3.size() ; i++)
    {
        cout << str3[i] << " " ;
        sort(str3[i].begin(), str3[i].end());
        cout << str3[i] << endl;
    }
    cout << endl ;

    cout << "________________________________" << endl;

    cout << "How to use getline in strings\n\n";

    string str4;
    getline(cin, str4);

    cout << "________________________________" << endl;

    cout << "What is (size), (length) and (at) functions\n\n";

    string str5 = "Ahmed";
    for (int i = 0 ; i < str5.size() ; ++i)
    {
        cout << str5.at(i) << " " ;
    }

    cout << str5.size() << endl ;
    cout << str5.length() << endl ;

    cout << "________________________________" << endl;

    cout << "what is (substr) function\n";
    cout << "(substr) function will not change my \nstring it just will return me my string\n\n";

    // 0  1  2  3  4  5  6  7  8  9  10
    // A  h  m  e  d     L  a  b  i  b

    string str6 = "Ahmed Labib" ;

    cout << str6.substr(0,11) << endl ;  // Ahmed Labib
    cout << str6.substr(3,4)  << endl ;  // ed L
    cout << str6.substr(3)    << endl ;  // ed Labib

    cout << "________________________________" << endl;
    cout << "what is (assign) sunction\n\n" ;

    string str7 = "Ahmed";
    string str8 = "Labib";

    cout << "Before using assign function" << endl ;
    cout << str7 << endl ;
    cout << str8 << endl ;

    str8.assign(str7);  // str8 = str7

    cout << "\nAfter using assign function" << endl ;
    cout << str7 << endl ;
    cout << str8 << endl ;

    cout << "________________________________" << endl;
    cout << "what is (swap) function\n\n";

    string str9  = "Ahmed" ;
    string str10 = "Labib" ;

    cout << "Before using swap function" << endl ;
    cout << str9  << endl ;
    cout << str10 << endl ;

    str9.swap(str10);

    cout << "\nAfter using swap function" << endl ;
    cout << str9  << endl ;
    cout << str10 << endl ;

    cout << "________________________________" << endl;
    cout << "what is (find) and (rfind) function\n\n";

    // 0 1 2 3 4 5 6 7 8
    // a b c a b c a b c

    string st1 = "abcabcabc";

    cout << st1.find("a")  << endl; // 0
    cout << st1.rfind("a") << endl; // 6
    // 0 1 2 3 4 5 6
    // a b a b a b c

    string st2 = "abababc";

    cout << st2.find("abc"); // 4

    cout << "________________________________" << endl;
    cout << "How to convert int to string\n\n";

    int x = 123;
    string y = to_string(x);
    cout << y << endl ;
    y[1] = '4';
    cout << y << endl ;

    cout << "________________________________" << endl;
    cout << "How to convert string to int\n\n";

    /*
        There are 2 ways
        =================
        1) using (stoi) ==> which mean (string to int) and in this case
                            you heave to include (string) library.

        2) using (atoi) ==> which mean (ASSCI to int) and in this case
                            you heave to include (cstdlib) library.
    */
    string a1 = "123";
    int b1 = stoi(a1);
    cout << b1+5 << endl ;

    string a2 = "123";
    int b2 = atoi(a2.c_str());
    cout << b2+5 << endl;

    cout << "________________________________" << endl;
    cout << "How to use push_back function in string to add one character\n\n";

    string st3 = "Ahmed ";
    st3.push_back('L');
    st3.push_back('a');
    st3.push_back('b');
    st3.push_back('i');
    st3.push_back('b');

    cout << st3 << endl ;

    cout << "________________________________" << endl;
    cout << "How to add multiple character after the end of a string\n\n";

    //way 1 ==> using append() function
    string st4 = "Ahmed ";
    st4.append("Labib");
    cout << st4 << endl ;

    //way 2 ==> using += operator
    string st5 = "Ahmed ";
    st5 += "Labib";
    cout << st5 << endl ;

    return 0;
}
