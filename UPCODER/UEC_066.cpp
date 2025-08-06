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

    int cnt = 0, k = 1;
    
    while (cnt < n) 
        cnt += snt(++k);

    cout << k;
    return 0;
}