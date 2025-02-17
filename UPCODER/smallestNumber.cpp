#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int64_t n; 

    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            int64_t k = sqrt(n*i);
            if (k*k == n*i) {
                cout << i << endl; 
                break;
            }
        }
    }

    return 0;
}