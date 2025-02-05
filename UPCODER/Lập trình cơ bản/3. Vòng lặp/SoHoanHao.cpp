#include <iostream>
using namespace std;

main() {
    int n;
    cin >> n;

    int sum = 0;
    
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    if (sum == n)
        cout << "Yes";
    else     
        cout << "No";
    
    return 0;
}
