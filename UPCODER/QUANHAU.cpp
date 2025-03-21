#include <iostream>
using namespace std;

int n, ans;
bool c[25], chinh[25], phu[25];

void Try(int i) {
    if (i == n) {
        ans++;
        return;
    }
    
    for (int j = 0; j < n; j++) {
        if (!c[j] && !chinh[i - j + n] && !phu[i + j]) {
            c[j] = true;
            chinh[i - j + n] = true;
            phu[i + j] = true;
            
            Try(i + 1);
            
            c[j] = false;
            chinh[i - j + n] = false;
            phu[i + j] = false;
        }
    }
}

int main() {
    cin >> n;
    Try(0);
    cout << ans;
    return 0;
}
