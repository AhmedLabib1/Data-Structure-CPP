#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int size;
	cin >> size;
	vector<int>V1(size);
	
	int n = 0;
	for (int i = 0; i < V1.size(); ++i)
	{
		cin >> V1[i];
		if (i == V1.size() - 1)
		{
			cout << "If you want to resize the list, enter the new size.\nElse enter -1 to finish: ";
			cin >> n;
			
			if (n < -1)
			{
				cout << "Enter a valid Size: ";
				cin >> n;
			}
			

			if (n == -1)
			{
				break;
			}
			else
			{
				V1.resize(n);
			}
		}
	}
	for (int i : V1)
	{
		if (i == *V1.begin())
		{
			cout << "Elements: ";
		}
		cout << i << " ";
	}
}