#include <iostream>
#include <vector>

using namespace std;

// iterators provide a way to access elements in a container (like arrays, vectors, lists, etc.)

int main()
{
	vector<int>v1(5);
	v1 = { 10,20,30,40,50 };

	// emplace and insert are doing the same thing (insert elements) but emplace is much faster
	v1.insert(v1.begin(), 0);
	v1.emplace(v1.end(), 60);

	// Note: as there are function push_back there are also emplace_back but emplace_back faster 

	// erase function to delete elements
	v1.erase(v1.end() - 1);
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	// (vector<int>::iterator) is data type and can be replaced by (auto)
	for (auto it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	for (vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	for (vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//_________________________________________________________________________________________

	vector<int>v2(10);
	v2 = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "Current Size: " << v2.size() << endl;

	for (auto it = v2.begin(); it != v2.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;
	
	v2.resize(5);
	v2.shrink_to_fit();

}