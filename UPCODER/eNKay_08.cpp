#include <iostream>
#include <set>
using namespace std;
 
int main() {
    set<int> s; 
    int n;

    while (cin >> n) {
        if (n < 0 && s.find(n) == s.end()) 
            cout << n << " ";
        if (n < 0) s.insert(n);
    }

    if (s.empty()) cout << "NOT FOUND";
    return 0;
}