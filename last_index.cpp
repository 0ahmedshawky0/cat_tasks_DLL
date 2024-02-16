#include <iostream>
#include <list>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    list<int> myList;

    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        myList.push_back(val);
    }

    int lastIdx = -1;
    int idx = 0;
    for (int num : myList) {
        if (num == x) {
            lastIdx = idx;
        }
        ++idx;
    }

    cout << lastIdx << endl;

    return 0;
}
