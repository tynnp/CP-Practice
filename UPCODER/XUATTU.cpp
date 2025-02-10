#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<string> v; 
    string s;

    while (cin >> s) 
        v.push_back(s);

    cout << v[0];
    for (int i = 1; i < v.size(); i++) 
        cout << "\n" << v[i];
    
    return 0;
}