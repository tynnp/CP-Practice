#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int64_t n, k;
    vector<int64_t> div;
    cin >> n >> k;
    
    for (int64_t i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.push_back(i);
            if (i != n / i) {
                div.push_back(n / i);
            }
        }
    }

    sort(div.begin(), div.end());

    if (k <= div.size()) 
        cout << div[k - 1] << endl;
    else 
        cout << -1 << endl;

    return 0;
}