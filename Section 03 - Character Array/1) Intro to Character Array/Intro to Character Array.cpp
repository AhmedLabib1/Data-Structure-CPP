#include <iostream>

using namespace std;

int main()
{
    //  '\0' ==> This is NULL Character work as a Terminator
    char name1[10];
    cout << "Enter your name1" << endl ;
    cin >> name1;// For Examble (abc)
    name1[4] = 'x';
    // will print (abc) only because the NULL character is in index (3)
    cout << "Your Name1 is " << name1 << endl;

    cout << "=================================" << endl ;

    char name2[10];
    cout << "Enter your name2" << endl ;
    cin >> name2 ;// For Examble (abc)
    name2[3] = 'd';
    name2[4] = 'x';

    // will print (abcdx) then will print garbage values until reach to NULL character
    cout << "Your name2 is " << name2 << endl;

    cout << "=================================" << endl ;

    char name3[10];
    cout << "Enter your name3" << endl ;
    cin >> name3 ;// For Examble (abc)
    name3[3] = 'd';
    name3[4] = 'x';
    name3[5] = '\0';  // Explicitly terminate the string
    // will print (abcdx) then will print garbage values until reach to NULL character
    cout << "Your name3 is " << name3 << endl;

    return 0;
}

// '/0' (NULL Character) index is equal to the length of the array character.
// last character index is equal to length of array character - 1.
// maximum character you can store in character array equal to it's size - 1.
