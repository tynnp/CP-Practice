#include <iostream>
using namespace std;

int main() {
    int n, sum = 0; 
    cin >> n;
    int a[n];

    for (int &x : a) {
        cin >> x;
        if (x % 2 == 0) sum += x;
    }

    cout << sum;
    return 0;
}