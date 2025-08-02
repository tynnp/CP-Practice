#include <iostream>
using namespace std;

int N, K;
int cnt[10000];

int main() {
    cin >> N >> K;
    
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        
        for (int i = a; i <= b; ++i) 
            cnt[i]++;
    }

    int ans = 0;
    for (int i = 0; i < 10000; i++)
        if (cnt[i] == K)
            ans++;

    cout << ans;
    return 0;
}