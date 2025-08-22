#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1000000001;
bool v[MAXN];

int main() {  
    cin.tie(0) -> sync_with_stdio(0);
    int x, t;
    cin >> t;
    
    while (t--) {
        cin >> x;
        if (!v[x]) 
            cout << x << " ";
        v[x] = true;
    }
    
    return 0;
}