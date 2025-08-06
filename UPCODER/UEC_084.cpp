#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    bool mark[205] = {false};
    for (int i = 0; i < n; i++) {
        if (!mark[a[i]]) {
            cout << a[i] << ' ';
            mark[a[i]] = true;
        }
    }

    return 0;
}