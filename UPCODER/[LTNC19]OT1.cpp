#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool check(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    int n, k, x, cnt = 0;
    bool checkK = false;
    vector<int> res;

    cin >> n >> k;
    while (n--) {
        cin >> x;

        if (check(x)) cnt++;
        else res.push_back(x);

        if (x == k) checkK = true;
    }

    cout << cnt << endl;
    cout << (checkK ? "Yes" : "No") << endl;
    
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}