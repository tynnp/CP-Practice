#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
#define int long long

int n, m;
bool prime[MAXN];

int32_t main() {
    cin >> n >> m;
    fill(prime, prime + MAXN, true);    
    
    prime[0] = prime[1] = false;
    for (int i = 2; i*i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i*i; j < MAXN; j += i)
                prime[j] = false;
        }
    }

    vector<int> water, food;
    bool waterCheck = true;

    for (int i = 2; i < MAXN; i++) {
        if (prime[i]) {
            if (waterCheck) {
                water.push_back(i);
                waterCheck = false;
            } else {
                food.push_back(i);
                waterCheck = true;
            }
        }
    }

    if (m == 0) {
        auto it = lower_bound(water.begin(), water.end(), n);
        int x = LLONG_MAX, y = LLONG_MAX;

        if (it != water.end())
            x = *it;

        if (it != water.begin())
            y = *(--it);

        cout << (abs(n - x) < abs(n - y) ? x : y);

    } else {
        auto it = lower_bound(food.begin(), food.end(), n);
        int x = LLONG_MAX, y = LLONG_MAX;

        if (it != food.end())
            x = *it;

        if (it != food.begin())
            y = *(--it);
        
        cout << (abs(n - x) < abs(n - y) ? x : y);
    }
    
    return 0;
}