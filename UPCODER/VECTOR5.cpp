#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (long long &x : v) cin >> x;

    long long sum = accumulate(v.begin(), v.end(), 0);
    double avg = (double) sum / n;

    vector<long long> res;

    copy_if(v.begin(), v.end(), back_inserter(res), [avg] (long long num) { 
        return num > avg; 
    });

    cout << res.size() << endl;
    if (res.empty()) 
        cout << -1 << endl;
    else 
        for (long long x : res)
            cout << x << ' ';

    return 0;
}