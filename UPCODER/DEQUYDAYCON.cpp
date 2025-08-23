#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;

int n, k, sum;
bool check;
int a[MAXN];
vector<int> res;

void Try(int i) {
    if (sum >= k || i == n) {
        if (sum == k) {
            for (int x : res) 
                cout << x << " ";
            cout << endl;
            check = true;
        } 
        return;
    }
    
    for (int j = i + 1; j <= n; j++) {
        sum += a[j];
        res.push_back(a[j]);
        Try(j);
        sum -= a[j];
        res.pop_back();
    }
}

int main() {
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    
    for (int i = 1; i <= n; i++) {
        sum = a[i]; 
        res.clear();
        res.push_back(a[i]);
        Try(i);
    }
    
    if (!check) cout << -1;
    return 0;
}