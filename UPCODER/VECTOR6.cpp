#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector<int> v;
    
    while (cin >> x) {
        if (v.empty() || v.back() < x)
            v.push_back(x);
    }
    
    for (int x : v)
        cout << x << ' ';
    
    return 0;
}