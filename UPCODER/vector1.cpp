#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector<int> v;

    while (cin >> x)
        v.push_back(x);

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << ' ';

    return 0;
}