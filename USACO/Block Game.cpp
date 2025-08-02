#include <iostream>
using namespace std;

int n;
string a, b;
int m1[300], m2[300], res[300];

int main() {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
  
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (n--) {
        cin >> a >> b;
        
        for (char c : a)
            m1[c]++;
            
        for (char c : b)
            m2[c]++;
        
        for (char c = 'a'; c <= 'z'; c++) {
            res[c] += max(m1[c], m2[c]);
            m1[c] = m2[c] = 0;
        }
    }
    
    for (char c = 'a'; c <= 'z'; c++)
        cout << res[c] << '\n';
    
    return 0;
}