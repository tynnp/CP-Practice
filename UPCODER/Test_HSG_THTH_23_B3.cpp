#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++)
            if (i >= a - b && j >= a - b)
                cout << ' ';
            else 
                cout << '*';
        cout << endl;
    }
    
    return 0;
}