#include <iostream>
using namespace std;

int n, x, a[105];
bool found;

int main() {
    cin >> n >> x;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found = true;
            cout << i;
            break;
        }
    }
    
    if (!found) 
        cout << -1;
    
    return 0;
}