#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    string s;
    
    cin >> n;
    cin.ignore(); 

    while (n--) {
        getline(cin, s);

        for (int i = 0; i < s.size(); i++)
            if (!isdigit(s[i])) 
                s[i] = ' ';
            
        stringstream ss(s);
        while (ss >> x)
            cout << x << ' ';
            
        cout << endl;
    }

    return 0;
}