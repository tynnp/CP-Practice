#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> ans;

int main() {
    cin >> n;
    ans.push_back("");
    
    for (int i = 0; i < n; i++) {
        int size = ans.size();
        for (int j = size-1; j >= 0; j--) 
            ans.push_back(ans[j]);
            
        size *= 2;
        for (int j = 0; j < size; j++)
            ans[j] = (j < ans.size()/2 ? '0' : '1') + ans[j];
    }
    
    for (string x : ans) 
        cout << x << endl;
    
    return 0;
}