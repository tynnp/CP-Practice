#include <iostream>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;

    int total = k * (w * (w + 1) >> 1);
    
    if (n >= total)
        cout << 0;
    else 
        cout << total - n;

    return 0;
}