#include <iostream>
#define endl '\n'
#define MAX 99999999
#define MIN -99999999
using namespace std;

int a[10000], n, k;

void Dong_1(int max) {
    int max2 = MIN;

    for (int i = 0; i < n; i++) 
        if (max2 < a[i] && a[i] < max) max2 = a[i];

    if (max2 == MIN) cout << -1 << endl; 
    else {
        for (int i = 0; i < n; i++)
            if (a[i] == max2) cout << i << " ";
        cout << endl;
    }
}

void Dong_2() {
    int viTri = -1, max3 = MIN;
    for (int i = 0; i < n; i++)
        if (max3 <= a[i] && a[i] <= k)
            max3 = a[i], viTri = i;
    cout << viTri << endl;
}

void Dong_3() {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j] <= a[j-1]) 
            swap(a[j], a[j-1]), j--;
    }

    bool check = true;
    for (int i = 0; i < n; i++) 
        if (a[i] > k) cout << a[i] << " ",
        check = false;
    if (check) cout << "00";
}

int main() {
    cin >> n >> k;
    int max = MIN;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (max < a[i]) max = a[i];
    }

    Dong_1(max);
    Dong_2();
    Dong_3();
    
    return 0;
}