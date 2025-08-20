#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    cin.ignore();

    while (t--) {
        string s; 
        getline(cin, s); 
        int k = -1;

        for (int i = k + 1; i < s.size(); i++) { 
            if (s[i] == ' ') 
                cout << char(s[k+1] + 32), k = i;

            if (i == s.size() - 1)
                for (int j = k + 1; j < s.size(); j++) 
                    cout << s[j];
        }

        cout << endl; 
    }
    
    return 0;
}