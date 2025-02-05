#include <iostream>
using namespace std;

bool perfect(int n) {
    int sum = 0;
    
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    
    return (sum == n);
}

main() {
    int n;
    cin >> n;
    cout << (perfect(n) ? "Yes" : "No");
    return 0;
}