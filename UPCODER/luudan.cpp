#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 3;
        return 0;
    }
    
    cout << n * 3 + n * 5 / 2;
    return 0;
}