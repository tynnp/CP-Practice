#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 2) {
        cout << -1;
        return 0;
    }
    
    for (int i = 2; i <= n; i++) {
        bool snt = true;
        
        for (int j = 2; j < i; j++)
            if (i % j == 0) 
                snt = false;
        
        if (snt) 
            cout << i << ' ';
    }
    
    return 0;
}