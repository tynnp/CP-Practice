#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v; 
    string st; 

    while (cin >> st) 
        v.push_back(st);
    
    for (int i = 0; i < v.size(); i++)
        if (v[i] == "password") 
            cout << i << endl;

    return 0;
}