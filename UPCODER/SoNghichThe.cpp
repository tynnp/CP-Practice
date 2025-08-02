#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, Max = 0;
    cin >> n;

    vector<int> giaTri(n);
    for (auto > : giaTri) {
        cin >> gt;
        Max = max(Max, gt);
    }

    int ans = 0;
    vector<int> visited(Max + 1);

    for (int i = 0; i < n; i++) {
        vector<int> check(Max + 1);
        bool found = false;

        for (int j = i + 1; j < n; j++) {
            if (giaTri[i] > giaTri[j] && visited[giaTri[i]] == 0 && check[giaTri[j]] == 0) {
                ans++;
                found = true;
                check[giaTri[j]] = 1;
            }
        }

        if (found) 
            visited[giaTri[i]] = 1;
    }

    cout << ans;
    return 0;
}
