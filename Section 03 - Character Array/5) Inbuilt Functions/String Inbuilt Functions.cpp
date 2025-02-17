#include <iostream>
#include <cstring> // to get access on string inbuilt functions

using namespace std;

// 1) How to write strlen function
int my_strlen (char input[])
{
    int count = 0;
    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        count++;
    }
    return count ;
}

// 2) How to write strcmp function
bool my_strcmp (char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
    {
        return false ;
    }

    for (int i = 0 ; str1[i] != '\0' ; i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }

    return true ;
}

// 3) How to write strcpy Function
void my_strcpy (char str1[], char str2[])
{
    for (int i = 0 ; i <= strlen(str2) ; i++)
    {
        str1[i] = str2[i];
    }
}

// 4) How to write strncpy Function
void my_strncpy (char str1[], char str2[], int numOfChars)
{
    for (int i = 0 ; i < numOfChars ; i++)
    {
        str1[i] = str2[i];
    }
}

/*

    Inbuilt Functions in cstring
    ============================
    1) strlen ==> string length
       Take one parametere
       . Parametere 1 is: name of character array one

    2) strcmp ==> string compare
       Take two parametere
       . Parametere 1 is: name of character array one
       . Parametere 2 is: name of character array two
       -----------------------------------------------
       it can return two values
       . Zero value: Two strings are equal
       . non-Zero value: Two strings are not equal

    3) strcpy ==> string copy
       Take two parametere
       . Parametere 1 is: name of character array one
       . Parametere 2 is: name of character array two

       Note: strcpy Function also copy NULL Character

    4) strncpy ==> string and copy
       Take three parameters
       . Parametere 1 is: name of character array one
       . Parametere 2 is: name of character array two
       . Parametere 3 is: Number of characters you want
         to copy from str2 to str1

       Note: strncpy Function dosn't copy NULL Character
       Note: if Number of characters you want to copy from str2 to
             str1 is bigger than length of str2 the output in str1
             will be look like str2


    5) strcat ==> string concatenate
       Take two parametere
       . Parametere 1 is: name of character array one
       . Parametere 2 is: name of character array two

*/

int main()
{
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);

    cout << "Length  Function: " << my_strlen(str1)       << endl;

    cout << "_______________________________________________" << endl;

    cout << "Compare Function: " << my_strcmp(str1, str2) << endl;

    cout << "_______________________________________________" << endl;

    cout << "\nBefore calling strcpy function" << endl ;
    cout << "str1: " << str1 << endl ;
    cout << "str2: " << str2 << endl ;

    my_strcpy(str1, str2);

    cout << "\nAfter calling strcpy function" << endl ;
    cout << "str1: " << str1 << endl ;
    cout << "str2: " << str2 << endl ;

    cout << "_______________________________________________" << endl;

    char str3[100], str4[100];
    cin.getline(str3, 100);
    cin.getline(str4, 100);

    cout << "\nBefore calling strncpy function" << endl ;
    cout << "str3: " << str3 << endl ;
    cout << "str4: " << str4 << endl ;

    my_strncpy(str3, str4, 4);

    cout << "\nAfter calling strncpy function" << endl ;
    cout << "str3: " << str3 << endl ;
    cout << "str4: " << str4 << endl ;

    cout << "_______________________________________________" << endl;

    char str5[100], str6[100];
    cin.getline(str5, 100);
    cin.getline(str6, 100);

    cout << "\nBefore calling strcat function" << endl ;
    cout << "str5: " << str5 << endl ;
    cout << "str6: " << str6 << endl ;

    strcat(str5, str6);

    cout << "\nAfter calling strcat function" << endl ;
    cout << "str5: " << str5 << endl ;
    cout << "str6: " << str6 << endl ;

    return 0;
}
