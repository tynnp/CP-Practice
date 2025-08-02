#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    int t, a, b; 
    vector<int> v;
    cin >> t;
   
    while (t--) {
        cin >> a >> c >> b;

        if (c=='+')
            v.push_back(a + b);
        
        if (c=='-')
            v.push_back(a - b);
        
        if (c=='*')
            v.push_back(a * b);

        if (c=='/')
            v.push_back(a / b);
    }

    sort(v.begin(), v.end());
    for (int x : v) 
        cout << x << endl;

    return 0;
}