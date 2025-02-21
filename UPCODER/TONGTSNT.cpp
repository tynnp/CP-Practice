#include <iostream>
using namespace std;

bool prime(int n) {
    for (int i = 2; i * i <= n; i++) 
        if(n % i == 0)
            return false;
    
    return n > 1;
}

int cal(int n) {
    int res = 0;
    int m = n;

    for (int i = 2; i <= m; i++) {
        while(m % i == 0) {
            res += i;
            m /= i;
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    
    while(!prime(n)) {
        int s = cal(n);

        if(s == n)
            break;
        n = s;
    }
    
    cout << n;
    return 0;
}
