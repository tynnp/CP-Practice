#include <bits/stdc++.h>
using namespace std;
 

int main() {
    int vt, tm, k; 
    cin >> vt >> tm >> k;

    if (tm < 1 || tm > 11 || vt < 1 || vt > 11) 
        cout << 0;

    else if (k == -1) {
        if (tm > vt) 
            cout << (11 - tm) + (11 - vt);
        else 
            cout << vt - tm;

    } else if (k == -2) {
        if (tm > vt) 
            cout << tm - vt;
        else 
            cout << tm + vt - 2;
        
    } else 
        cout << 0;

    return 0;
}