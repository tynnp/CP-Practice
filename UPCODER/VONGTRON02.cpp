#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, m;
    queue<int> q;
    queue<int> k;
    cin >> n >> m;
    
    while (m--) {
        cin >> x;
        k.push(x);
    }
    
    for (int i = 0; i < n; i++)
        q.push(i);
    
    while (!q.empty()) {
        m = k.front();
        k.push(m);
        k.pop();
        
        for (int i = 1; i < m; i++) {
            q.push(q.front());
            q.pop();
        }
        
        cout << q.front() << " ";
        q.pop();
    }
   
   return 0;
}