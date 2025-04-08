#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector<int> v;
    
    while (cin >> x) {
        v.push_back(x);
    }
    
    vector<int>::iterator it = v.begin();
    for (it; it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;
        
    vector<int>::reverse_iterator rit = v.rbegin();
    for (rit; rit != v.rend(); rit++)
        cout << *rit << ' ';
        
    return 0;
}
