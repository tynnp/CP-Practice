#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector<int> v;
    
    while (cin >> x) 
        v.push_back(x);
    
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << endl;
        
    vector<int>::reverse_iterator rit;
    for (rit = v.rbegin(); rit != v.rend(); rit++)
        cout << *rit << ' ';
    
    return 0;
}