#include <iostream>
using namespace std;

int main() {
    int t, p, c;
    cin >> t >> p >> c;

    if (t == 1) 
        cout << (long long) p*c;
    
    if (t == 2) 
        cout << (long long) (p/2 + p%2)*c;

    return 0;
}