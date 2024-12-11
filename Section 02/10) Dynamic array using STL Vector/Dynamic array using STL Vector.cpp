#include <iostream>
#include <vector>

using namespace std;

int main  ()
{
	int size;
	
	cout << "Enter array size" << endl;
	cin >> size;

	vector<int> dynamicArray(size);

	for (int i = 0; i < size; i++)
	{
		cin >> dynamicArray[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << dynamicArray[i] << " ";
	}
}