#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int a, b, sum[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < MAXN; i++)
        for (int j = 2*i; j < MAXN; j += i)
            sum[j] += i;

    cin >> a >> b;
    if (sum[a] == b + 1 && sum[b] == a + 1) 
        cout << "YES";
    else 
        cout << "NO";
    
    return 0;
}