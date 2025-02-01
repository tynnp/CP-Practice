#include <iostream>
using namespace std;

int main() {
    int t;
    int res[] = {4, 3, 5, 6, 7, 8, 2, 1, 9, 0};
    
    cin >> t;
    
    if (t == 10) {
        cout << res[2] << res[9] << res[1] << res[2] << res[5]; 
    } else
        cout << res[t];
    
    return 0;
}