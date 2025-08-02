#include <iostream>
using namespace std;

int n, x;
int chan, le;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        chan += x % 2 == 0;
        le += x % 2 != 0;
    }
    
    while (le > chan) {
        chan++;
        le -= 2;
    }
    
    if (chan > le + 1)
        chan = le + 1;
    
    cout << chan + le;
    return 0;
}