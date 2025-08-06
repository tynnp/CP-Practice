#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int n;
    cin >> n;
    
    n += 1;
    while (!snt(n)) n++;
    
    cout << n;
    return 0;
}