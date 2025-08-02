#include <iostream>
using namespace std;

int main() {
    int n, v, t;
    cin >> n >> v >> t;
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        
        if (i == v)
            cout << t << ' ';
        
        cout << x << ' '; 
    }
}
