#include <iostream>
#include <vector>

using namespace std;

/* _____________________________________________________________________________________________________
    !this algorithm called Boyer-Moore's Voting Algorithm.

    ? Why Does This Work
    ● When count == 0, we reset the candidate because all previous pairs have canceled each other out.
    ● Since the majority element appears more than half the time, it cannot be completely canceled out.
    ● The last remaining candidate must be the majority element.

    ? what is the Time complexity of this algorithm
    in W.C.S ==> O(n).
    in A.C.S ==> O(n).
    in B.C.S ==> O(n).

    ? what is the space complexity of this algorithm
    space complexity is O(1).
_____________________________________________________________________________________________________ */

int majorityElement(vector<int> vec)
{
    int count = 0, candidate = -1;

    for (int num : vec)
    {
        if (count == 0)
        {
            candidate = num;
        }
        count += (num == candidate)? 1 : -1;
    }
    return  candidate;
}

int main()
{
    int size;
    cin >>size;

    vector<int> vec(size);

    for (int& i : vec) cin >> i;

    cout << "Mahority Element is: " << majorityElement(vec);
}