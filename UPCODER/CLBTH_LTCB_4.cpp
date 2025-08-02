#include <iostream>
using namespace std;

int main() {
    long long n, ans = 0;
    cin >> n;
    
    if (n <= 50) 
        ans = n * 1678;
    else if (n <= 100)  
        ans = 50 * 1678 + (n - 50) * 1734;
    else if (n <= 200)
        ans = 50 * 1678 + 50 * 1734 + (n - 100) * 2014;
    else if (n <= 300)
        ans = 50 * 1678 + 50 * 1734 + 100 * 2014 + (n - 200) * 2536;
    else if (n <= 400)
        ans = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (n - 300) * 2834;
    else 
        ans = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (n - 400) * 2937;
    
    cout << ans;
}
