#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cntDiv(int n) {
    int res = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res++;
            res += (i != n / i);
        }
    }
    
    return res;
}

int n, maxDiv;
vector<int> v, divCnt;
vector<pair<int,int>> ans;

int main() {
    cin >> n;
    v.resize(n);
    divCnt.resize(n);
    for (int &x : v) cin >> x;

    for (int i = 0; i < n; i++) {
        divCnt[i] = cntDiv(v[i]);
        maxDiv = max(maxDiv, divCnt[i]);
    }
    
    for (int i = 0; i < n; i++) 
        if (divCnt[i] == maxDiv)
            cout << v[i] << " ";
    cout << endl;
    
    for (int i = 0; i < n; i++) 
        ans.push_back({v[i], divCnt[i]});
    
    sort(ans.begin(), ans.end(), [] (auto &a, auto &b) {
        if(a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });
    
    for (auto p : ans) 
        cout << p.first << " ";
    
    return 0;
}