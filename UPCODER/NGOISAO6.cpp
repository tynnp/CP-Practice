#include <iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 1; j < 2*n; j++) {
            if ((j == i || j == 2*n - i) || i == 1) cout << "*";
            else cout << " ";
        }
        if (i > 1) cout << endl;
    }
    
    return 0;
}