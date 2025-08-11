#include <iostream>
#include <algorithm>
using namespace std;

string operator + (string a, string b) {
    int car = 0, sum = 0;
    string res;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while(i >= 0 || j >= 0 || car > 0) {
        int x = (i >= 0 ? a[i] - '0' : 0);
        int y = (j >= 0 ? b[j] - '0' : 0);
        sum = x + y + car;
        res += (sum % 10) + '0';
        car = sum /10;
        i--;
        j--;
    } 

    reverse(res.begin(), res.end());
    return res;
}

string fibo(int n) {
    string a = "0";
    string b = "1";
    string c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin >> n;

    if(n == 0) cout << 0;
    else cout << fibo(n);
    
    return 0;
}
