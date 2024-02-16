#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() 
{
    int x;
    int n = 0;
    cout << "Enter element in list";
    list <int> nums;
while ( cin >> x)
{
   nums.push_back(x);
}
cin >> n;
while ( n-- )
{
    nums.pop_back();
}
 for (auto it = nums.begin(); it != nums.end(); it++) 
    {
        cout << *it << " ";
    }
    return 0;
}
