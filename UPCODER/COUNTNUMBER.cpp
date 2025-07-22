#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e6 + 5;
int n, i, a[MAXN];
int duong[MAXN], am[MAXN];

int main() {
    cin >> n;

    for (i = 0; i < n; i++) 
        cin >> a[i];
    
    for (i = 0; i < n; i++) {
        if (a[i] > 0) duong[a[i]]++;
        else am[-a[i]]++;
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 0 && duong[a[i]] != 0) {
            cout << duong[a[i]] << ' ';
            duong[a[i]] = 0;

        } else if (am[-a[i]] != 0) {
            cout << am[-a[i]] << ' ';
            am[-a[i]] = 0;
        }
    }
    
    return 0;
}