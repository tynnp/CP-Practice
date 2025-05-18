#include <iostream>
using namespace std;

int virus(int n) {
    if (n == 0) 
        return 1;
    return 2 * virus(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << virus(n);
    return 0;
}