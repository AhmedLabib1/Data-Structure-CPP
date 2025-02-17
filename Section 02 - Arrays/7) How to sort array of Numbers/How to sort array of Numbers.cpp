#include <iostream>
#include <algorithm> // for Sort()

using namespace std;

int main ()
{
	int size;
	cin >> size;

	// Dynamic array
	int* ptr = new int[size];

	for (int i = 0 ; i < size ; i++)
	{
		cin >> *(ptr + i);
	}

	sort(ptr, ptr + size);

	for (int i = 0 ; i < size ; i++)
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl;
}