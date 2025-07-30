#include <iostream>
using namespace std;

int main() {
    int a[300], n = 0;
    while (cin >> a[n]) n++;
    
    bool mark[300] = {false};
    for (int i = 0; i < n; i++) {
        if (mark[a[i] + 100] == false) {
            cout << a[i] << ' ';
            mark[a[i] + 100] = true;
        }
    }
    
    return 0;
}