#include <bits/stdc++.h>
using namespace std;

int d, sumTime, min, max, sum;
int minTime[d], maxTime[d];
vector<int> res;

int main() {
    cin >> d >> sumTime;

    for (int i = 0; i < d; i++) {
        cin >> minTime[i] >> maxTime[i];
        max += maxTime[i];
        min += minTime[i];
        sum += minTime[i];
        res.push_back(minTime[i]);
    }

    if (min <= sumTime && sumTime <= max) {
        cout << "YES\n";
        if (sum < sumTime) {
            for (int i = 0; i < d; i++) {
                int r = maxTime[i] - minTime[i];
                int k = 1;
                while (k <= r) {
                    if (sum == sumTime) break;
                    sum++;
                    res[i]++;
                    k++;
                }         
            }
        }

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    } else cout << "NO";
    
    return 0;
}