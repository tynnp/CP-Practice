#include <bits/stdc++.h>
using namespace std;

const int INITAL = 100000; 
const int BET = 10000;           

int tinhDiem(vector<string> v) {
    int res = 0;
    int jqk = 0; 

    for (string c : v) {
        if (c == "J" || c == "Q" || c == "K") {
            jqk++;
            res += 100;
            continue;
        }
        if (c == "A")
            res += 1;
        else if (c == "10")
            res += 10;
        else
            res += c[0] - '0';
    }

    if (jqk == 3)
        return res;
    return res % 10;
}

int main() {
    int n; 
    cin >> n;
    cin.ignore(); 

    vector<string> a[6];
    string player[] = {"Dau", "Su", "Lu", "Bu", "Ti", "Teo"};
    int money[6] = {0, INITAL, INITAL, INITAL, INITAL, INITAL};

    int tongTienDau = 0; 
    for (int round = 0; round < n; round++) {
        for (int i = 0; i < 6; i++) {
            string x, y, z;
            cin >> x >> y >> z;
            a[i] = {x, y, z};
        }

        cin.ignore(); 

        int points[6];
        for (int i = 0; i < 6; i++) 
            points[i] = tinhDiem(a[i]);


        int diemDau = points[0];
        int ketQuaDau = 0; 

        for (int i = 1; i < 6; i++) {
            if (points[i] > diemDau) {
                ketQuaDau -= BET;
                money[i] += BET;
                money[0] -= BET;
            } else if (points[i] < diemDau) {
                ketQuaDau += BET;
                money[i] -= BET;
                money[0] += BET;
            }
        }

        tongTienDau += ketQuaDau; 
    }

    if (tongTienDau > 0)
        cout << "Dau : Thang " << tongTienDau << endl;
    else if (tongTienDau < 0)
        cout << "Dau : Thua " << -tongTienDau << endl;
    else
        cout << "Dau : Hoa" << endl;

    for (int i = 1; i < 6; i++) 
        cout << player[i] << " : " << money[i] << endl;

    return 0;
}