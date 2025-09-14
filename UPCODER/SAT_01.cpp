#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    do {
        cout << n << ' ';
    } while (n-- != 1);
    
    return 0;
}