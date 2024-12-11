#include <iostream>

using namespace std;

/*
    There are two limitation with (cin) with char array
    ===================================================
    1) the length of the char array must not equal to her size,
    but the length of it must equal to her size (-1)
                 ---------------------
    2) (cin) stop taking input as it will encounter
        1) Space
        2) Tabs
        3) New Line '\n'
                 ---------------------
    These two limitation can be solved by using cin.getline

*/

int length (char input[])
{
    int count = 0;

    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        count++;
    }

    return count ;
}

int main()
{
    char name1[100];

    cout << "Enter your name1: " ;
    cin.getline(name1, 100, '\n');

    cout << "Name1 is " << name1 << endl;
    cout << "Naem1 Length: " << length(name1) << endl;

    cout << "___________________________________" << endl ;

    char name2[10];

    cout << "Enter your name2: " ;
    cin.getline(name2,10); // Hello Ali

    cout << "Name2 is: " << name2 << endl;
    cout << "Name2 Length: " << length(name2) << endl ;

    cout << "___________________________________" << endl ;

    cout << "Enter your name2 again: " ;
    cin.getline(name2,4); // Hello Ali

    cout << "Name2 is: " << name2 << endl;
    cout << "Name2 Length: " << length(name2) << endl ;

    cout << "___________________________________" << endl ;

    /*

    What is delimiter parameter in getline function
    ================================================
    delimiter is the third parameter in getline function and
    delimiter is a terminator determines where the function
    stops reading input for each line and delimiter is by deafult
    stored newline '\n' in him
    */

    char name3[10];

    cout << "Enter your name3: " ;
    cin.getline(name3,10,'b'); // Ahmed Labib

    cout << "Name3 is: " << name3 << endl ;
    cout << "Name3 Length: " << length(name3) << endl ;
    return 0;
}
