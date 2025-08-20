#include <bits/stdc++.h>
using namespace std;
 
int main() {
    db n, S = 0; 
    cin >> n;

    while (n) {
        S += n / (n + 1); 
        n--;
    }
    
    //Làm tròn đến 3 chữ số sau dấu thập phân
    cout << setprecision(4) << S;
    return 0;
}