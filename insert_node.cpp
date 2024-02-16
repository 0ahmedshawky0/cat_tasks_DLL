#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    list<int> nums;
    int N = 0, n = 0;
    cout << " Enter Number of element in list ";
    cin >> N;
    cout << " Enter A new value you need add";
    cin >> n;
    for (int i = 0; i < N; i++)
    {
        int x = 0;
        cin >> x;
        nums.push_back(x);
    }
    nums.push_front(n);
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
