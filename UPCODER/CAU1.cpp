#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    int res = 0;
    int m = n;

    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }

    return res == m;
}

int x;
vector<int> doiXung, khongDoiXung;

int main() {
    freopen("vector_inp.txt", "r", stdin);
    freopen("vector_out.txt", "w", stdout);

    while (cin >> x) {
        if (check(x)) 
            doiXung.push_back(x);
        else 
            khongDoiXung.push_back(x);
    }

    sort(doiXung.begin(), doiXung.end(), greater<int>());
    sort(khongDoiXung.begin(), khongDoiXung.end());

    cout << *max_element(doiXung.begin(), doiXung.end()) << ' ';
    cout << accumulate(doiXung.begin(), doiXung.end(), 0) << '\n';

    for (int x : doiXung) 
        cout << x << ' ';
    cout << endl;

    cout << *min_element(khongDoiXung.begin(), khongDoiXung.end()) << ' ';
    cout << accumulate(khongDoiXung.begin(), khongDoiXung.end(), 0) << '\n';

    for (int x : khongDoiXung) 
        cout << x << ' ';
    cout << endl;

    return 0;
}