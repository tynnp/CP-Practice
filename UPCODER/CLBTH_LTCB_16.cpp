#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int k;
    cin >> k;

    for (int i = 2; i <= k; i++)
        if (snt(i))
            cout << i << endl;
        
    return 0;
}