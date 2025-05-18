#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int x;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    
    for (int i = 0; i < k; i++) {
        x = q.front();
        q.push(x);
        q.pop();
    }
    
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    
    return 0;
}