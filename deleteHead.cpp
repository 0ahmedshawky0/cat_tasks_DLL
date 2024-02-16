#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() 
{
    list <int> nums;
   int N;
   cout << " Enter number element in list";
   cin >> N;
   for ( int i = 0; i < N; i++)
   {
    int x;
    cin >> x;
      nums.push_back(x);
   }
    nums.pop_front();
    for (auto it = nums.begin(); it != nums.end(); it++) 
    {
        cout << *it << " ";
    }
    

    return 0;
}
