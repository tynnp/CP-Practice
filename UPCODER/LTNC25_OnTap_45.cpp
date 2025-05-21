#include <bits/stdc++.h>
using namespace std;

int n, a[101];
vector<int> cur;

void Try(int s, int k) {
    if (cur.size() == k) {
        cout << "(";

        for (int i = 0; i < k; ++i) {
            cout << cur[i];
            if (i + 1 < k) 
                cout << " ";
        }

        cout << ")\n";
        return;
    }

    for (int i = s; i < n; ++i) {
        cur.push_back(a[i]);
        Try(i + 1, k);
        cur.pop_back();
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    
    sort(a, a + n);
    
    cout << "()\n";
    for (int k = 1; k <= n; ++k) 
        Try(0, k);

    return 0;
}