#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    n = (n < 0 ? -n : n);

    if (n == 0) cout << "VO SO UOC";
    else 
        for (int i = 1; i <= n; i++)
            if (n % i == 0) cout << i << " ";
    
    return 0;
}