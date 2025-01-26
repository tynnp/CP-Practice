#include <iostream>
using namespace std;

int main() {
    int64_t n;
    cin >> n;
    if (n & 1)
        cout << "NO";
    else 
        cout << "YES";
}
