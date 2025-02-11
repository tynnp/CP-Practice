#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
  
    while (cin >> n) {
        if (n[0] == '-') {
            n.erase(0, 1);
            
            if (prev_permutation(n.begin(), n.end()) && n[0] != '0') 
                cout << '-' << n << '\n';
            else 
                cout << "Error!\n";
            continue;
        }
        
        if (next_permutation(n.begin(), n.end()) && n[0] != '0') 
            cout << n << '\n';
        else 
            cout << "Error!\n";
    }
        
    return 0;
}