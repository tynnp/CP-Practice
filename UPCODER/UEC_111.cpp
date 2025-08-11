#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int chan = 0, le = 0;

    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0)
            chan += d;
        else 
            le += d;
        n /= 10;
    }

    if (chan == 0) {
        cout << "NO";
        return 0;
    }

    if (le % chan == 0)
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}