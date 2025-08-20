#include <iostream>
#include <cmath>
using namespace std;

int a[10000], n = 0;
bool SNT(int a);
int UCLN(int a, int b);
void Dong_1(int max);
void Dong_2(int min);
void Dong_3();
void Dong_4();

int main() {
    int max = -99999999, min = 99999999;

    while (cin >> a[n]) {
        if (max < a[n]) max = a[n];
        if (min > a[n]) min = a[n];
        n += 1;
    } 

    Dong_1(max); 
    Dong_2(min); 
    Dong_3(); 
    Dong_4();
    return 0;
}

bool SNT(int a) {
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0) return false;
    return a > 1;
}

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void Dong_1(int max) {
    int ans = -99999999, idx = -1;

    for (int i = 0; i < n; i++)
        if (ans <= a[i] && a[i] < max)
            ans = a[i], idx = i;

    cout << idx << endl;
}

void Dong_2(int min) {
    int ans = 99999999, k = 0;

    for (int i = 0; i < n; i++)
        if (ans > a[i] && a[i] > min)
            ans = a[i];

    for (int i = 0; i < n; i++)
        if (ans == a[i])
            cout << i << " ", k++;

    if (!k) cout << -1;
    cout << endl;
}

void Dong_3() {
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            ans = max(ans, UCLN(a[i], a[j]));
    cout << ans << endl;
}

void Dong_4() {
    int ans = 99999999;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (SNT(a[i] + a[j]))
                ans = min(ans, a[i] + a[j]);
    cout << (ans == 99999999 ? -1 : ans);
}