#include <iostream>
#include <string>
using namespace std;

char odd;
string s, ans;
int a[1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for (char &c : s)
        a[c]++; 

    int cntOdd = 0;
    for (char c = 'A'; c <= 'Z'; c++) {
        if (a[c] & 1) {
            cntOdd++;
            odd = c;
            continue;
        }
        
        if (a[c])
            ans.insert(ans.size() / 2, a[c], c);

        if (cntOdd > 1) 
            break;
    }

    if (cntOdd)
        ans.insert(ans.size() / 2, a[odd], odd);

    if (cntOdd > 1) 
        cout << "NO SOLUTION";
    else 
        cout << ans;
    
    return 0;
}