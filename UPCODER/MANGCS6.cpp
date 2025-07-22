#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> v;
   
    while (cin >> n) 
        v.push_back(n);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        if (v[i] % 2 != 0) 
            cout << 0 << " ";
    }
    
    return 0;
}