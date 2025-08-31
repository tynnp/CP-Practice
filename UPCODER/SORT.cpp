#include <bits/stdc++.h>
using namespace std;

int dem(int n) {
    int cnt = 0;

    while (n > 0) {
        if (n % 10 % 2 != 0) cnt++;
        n /= 10;
    }

    return cnt;
}

int n, x;
vector<int> v;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [] (int a, int b){
        if (dem(a) != dem(b)) 
            return dem(a) > dem(b);
        return a < b;         
    });

    for (int x : v) 
        cout << x << " ";
    
    return 0;
}
