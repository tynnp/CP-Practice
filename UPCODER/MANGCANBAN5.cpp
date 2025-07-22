#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    char c;
    vector<char> v; 
    vector<char>::iterator it, it2;
    while (cin >> c) v.push_back(c);
    
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    it = v.begin() + 2; 
    it2 = v.end() - 2;
    
    cout << endl << *it << " " << *it2;
    return 0;
}