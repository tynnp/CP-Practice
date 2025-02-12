#include <iostream>
using namespace std;

int main(){
    int64_t n, ans = 1;
    cin >> n;
    
    while(ans * 2 <= n)
        ans *= 2;
        
    cout << ans;
    return 0;
}
