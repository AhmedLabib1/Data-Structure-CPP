#include <iostream>
#include <vector>

using namespace std;

// vectors is dynamic array and sequence container
// std::vector<data_Type> vector_Name;
// Vector .... ==> Template class
// vector_Name ==> object from the Template class
// in array if you didn't give intial value for elements their values will be garbage values
// in vector if you didn't give intial value for elements their value will be Zeros
// the start of an array called ==> begin - front
// the end of an array called   ==> end - back - rear

int main()
{
	vector<int>Numbers(5); // initial values ==>  0 0 0 0 0

	Numbers.push_back(50); // 0 0 0 0 0 50

	for (int i : Numbers)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << Numbers.front() << endl;
	cout << Numbers.back() << endl;

	Numbers.push_back(100);
	Numbers.pop_back();	// will pop last element

	//______________________________________________________________

	vector<int>v1 = { 1,2,3,4,5 };
	//______________________________
	vector<int>v2(5);
	//______________________________
	vector<int>v3(5);
	v3 = { 1,2,3,4,5 };

	//______________________________________________________________

	// copy constructor
	vector<int>v4 = { 1,2,3,4,5 };
	vector<int>v5(v4);

	//______________________________________________________________

	// other way to give initial value to vecor
	vector<int>v6(5, 100); // 100 100 100 100 100
	vector<int>v7(6, 200); // 200 200 200 200 200 200

	v6.swap(v7);

	// v6 ==> 200 200 200 200 200 200
	// v7 ==> 100 100 100 100 100

	//______________________________________________________________

	vector<int>v8(150);

	v8.push_back(50);

	cout << "Size is: " << v8.size() << endl;
	cout << "Capacity is: " << v8.capacity() << endl;
}