#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int n, sum[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < MAXN; i++)
        for (int j = 2*i; j < MAXN; j += i)
            sum[j] += i;

    cin >> n;
    int a, b;
    while (n--) {
        cin >> a >> b;
        cout << (sum[a] == b ? "Yes\n" : "No\n"); 
    }
    
    return 0;
}