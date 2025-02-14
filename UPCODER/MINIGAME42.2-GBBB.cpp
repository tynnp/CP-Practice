#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int x, n, ans; 
queue<int> q;
int a[1000001];

int main() {
    cin >> n;

    while (n--) {
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        int k = q.front();

        if (a[k] == 0) {
            ans += 1;
            a[k-1] += 1;

        } else {
            a[k] -= 1;
            a[k-1] += 1;
        }

        q.pop();
    }
    
    cout << ans;
    return 0;
}