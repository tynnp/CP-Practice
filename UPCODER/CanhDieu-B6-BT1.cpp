#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 3328 == 0) cout << "Năm nhuận kép";
    else if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) cout<<"Năm nhuận";
    else cout << "Không là năm nhuận";
    
    return 0;
}