#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;
bool check;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) 
        q.push(i);
    
    while (!q.empty()) {
        if (check) 
            cout << q.front() << ' ';
        else 
            q.push(q.front());
        
        q.pop();
        check = !check;
    }

    return 0;
} 