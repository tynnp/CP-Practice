#include <iostream>
using namespace std;

int main() {
    int n, m, k, sum = 0;
    cin >> n >> m >> k;

    while (n > 0) sum += n%10, n /= 10;
    while (m > 9) m /= 10;
    cout << (sum + m == k ? "Yes" : "No");
    
    return 0;
}