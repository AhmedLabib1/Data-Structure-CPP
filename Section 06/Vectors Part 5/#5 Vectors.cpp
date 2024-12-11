#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool greaterThanThree(int Num)
{
	return Num > 3;
}

int main ()
{
	vector<int>v1 = { 0,-15,30,25,9 };
	
	for (int i : v1)
	{

		if (i == *v1.begin())
		{
			cout << "Normal Vector: ";
		}

		cout << i << " ";
	}

	cout << endl;

	// asscending sort
	sort(v1.begin(), v1.end());

	for (int i : v1)
	{
		if (i == *v1.begin())
		{
			cout << "Asscending Sorted Vecor: ";
		}
		cout << i << " ";
	}

	cout << endl;

	// descending sort
	sort(v1.rbegin(), v1.rend());

	for (int i : v1)
	{
		if (i == *v1.begin())
		{
			cout << "Descending Sorted Vecor: ";
		}
		cout << i << " ";
	}

	cout << endl;

	reverse(v1.begin(), v1.end());

	for (int i : v1)
	{
		if (i == *v1.begin())
		{
			cout << "Reversed Vector: ";
		}
		cout << i << " ";
	}

	cout << endl;

	cout << "minimum element in vector: " << *min_element(v1.begin(), v1.end()) << endl;
	cout << "maximum element in vector: " << *max_element(v1.begin(), v1.end()) << endl;
	auto pair = minmax_element(v1.begin(), v1.end());
	cout << "minimum element in vector: " << *pair.first << endl;
	cout << "maximum element in vector: " << *pair.second << endl;

	auto it_greaterThanThree = find_if(v1.begin(), v1.end(), greaterThanThree);

	for (; it_greaterThanThree != v1.end(); it_greaterThanThree++)
	{
		cout << *it_greaterThanThree << " ";
	}
	cout << endl;

}