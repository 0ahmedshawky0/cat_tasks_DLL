#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    list<int> nums;
    int x = 0;
    cout << " Enter element in list";
    while (cin >> x)
    {
        nums.push_back(x);
    }
    nums.reverse();
    cout << " list after reverse : ";
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
