#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int x;
    vector<int> v;
    
    while (cin >> x) 
        v.push_back(x);
    
    sort(v.begin(), v.end());
    
    vector<int>::iterator it = remove_if(v.begin(), v.end(), snt);
    v.erase(it, v.end());
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    
    return 0;
}