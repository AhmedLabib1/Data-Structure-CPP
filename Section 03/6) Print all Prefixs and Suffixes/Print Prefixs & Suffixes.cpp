#include <iostream>
#include <cstring>

using namespace std;

int length (char input[])
{
    int count = 0;

    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        count++;
    }

    return count;
}

void printAllPrefixes (char input[]) // Ahmed
{
    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        for (int j = 0 ; j <= i ; j++)
        {
            cout << input[j] << " ";
        }
        cout << endl ;
    }
}

void PrintAllSuffixes (char input[])
{
	for (int i = length(input) - 1; i >= 0 ; i--)
	{
		for (int j = i; j <= length(input) - 1; j++)
		{
			cout << input[j] << " ";
		}
		cout << endl;
	}
}

int main()
{
    
    char name[100];
    cin.getline(name, 100);

    cout << "\nPrint All Prefixes" << endl ;
    printAllPrefixes(name);

    cout << "\nPrint All Suffixes" << endl ;
    PrintAllSuffixes(name);

}
