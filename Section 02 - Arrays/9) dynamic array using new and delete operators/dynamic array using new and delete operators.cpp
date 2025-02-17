#include <iostream>

using namespace std;

int main() {
	
	int size;
	
	cout << "Enter array size" << endl;
	cin >> size;

	// Dynamically allocate memory for the array
	int* dynamicArray = new int[size];

	// Initialize array values
	for (int i = 0; i < size; i++)
	{
		cin >> dynamicArray[i];
	}
	
	// print values of the array
	for (int i = 0; i < size; i++)
	{
		cout << dynamicArray[i] << " ";
	}

	// Deallocate memory
	delete[] dynamicArray;
	// Memory is deallocated using delete[] to avoid memory leaks
}