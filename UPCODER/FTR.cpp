#include <iostream>
using namespace std; 

int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8}; 
  
int64_t solve(int64_t n) { 
    if (n < 10) 
        return dig[n]; 

    if (((n / 10) % 10) % 2 == 0) 
        return (6 * solve(n / 5) * dig[n % 10]) % 10; 

    return (4 * solve(n / 5) * dig[n % 10]) % 10; 
} 

int main() { 
    int64_t n;
    cin >> n;
    cout << solve(n); 
    return 0; 
} 