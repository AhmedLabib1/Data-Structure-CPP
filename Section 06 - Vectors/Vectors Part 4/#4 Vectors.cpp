#include <iostream>
#include <vector>
#include <algorithm>

// Asscending ==> LOW  --> HIGH ==> normally_sort
// Descending ==> HIGH --> LOW  ==> reversed_sort

using namespace std;

bool compareIntegersDescending(int a, int b) {
	return a > b;
}

int main()
{
	// sort vector of integers

	vector<int>v1 = { 15,5,36,-30,46,19 };

	sort(v1.begin(), v1.end());


	// (vector<int>::iterator) can be replaced with (auto)
	// assending order ==> normal sorting
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// decending order
	for (vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "========================================================"<< endl;
	//________________________________________________________________________

	//sort vector of strings

	vector<string>v2 = { "Watermelon", "Banana", "Apple", "Orange" };

	sort(v2.begin(), v2.end());

	for (vector<string>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "   ";
	}
	cout << endl;

	for (vector<string>::reverse_iterator it = v2.rbegin(); it != v2.rend(); it++)
	{
		cout << *it << "   ";
	}
	cout << endl;

	cout << "========================================================" << endl;
	//________________________________________________________________________

	//reverse vecor of integers
	
	vector<int>v3 = { 5,10,15,20,25,30 };

	reverse(v3.begin(), v3.end());

	for (int i : v3)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "========================================================" << endl;
	//________________________________________________________________________

	//reverse vecor of strings

	vector<string>v4 = { "Ahmed", "Mahmoud", "Labib", "Maged", "Ahmed" };

	reverse(v4.begin(), v4.end());

	for (string i : v4)
	{
		cout << i << " ";
	}
}