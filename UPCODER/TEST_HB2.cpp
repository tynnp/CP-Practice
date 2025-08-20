#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
struct ToaDo {
    int x, y;
};

double khoangCach(ToaDo p1, ToaDo p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main() {
    int n; 
    cin >> n;
    ToaDo DSTD[n];

    for (int i = 0; i < n; i++)
        cin >> DSTD[i].x >> DSTD[i].y;

    ToaDo diemGanNhat = DSTD[0];
    for (int i = 1; i < n; i++)
        if (abs(DSTD[i].x) < abs(diemGanNhat.x) || abs(DSTD[i].x == diemGanNhat.x && DSTD[i].y > diemGanNhat.y))
            diemGanNhat = DSTD[i];

    cout << "(" << diemGanNhat.x << "," << diemGanNhat.y << ")" << endl;
    

    double tmp = 0;
    ToaDo D1, D2;

    for (int i = 0; i < n - 1; i ++) {
        for (int j = i + 1; j < n; j++) {
            double d = khoangCach(DSTD[i], DSTD[j]);
            if (d > tmp) {
                tmp = d, 
                D1 = DSTD[i], 
                D2 = DSTD[j];
            }
        }
    }

    cout << "(" << D1.x << "," << D1.y << ")" << " ";
    cout << "(" << D2.x << "," << D2.y << ")" << endl;

    bool kt = false;
    for (int i = 0; i < n - 1; i ++) {
        for (int j = i + 1; j < n; j++) {
            if (DSTD[i].x == DSTD[j].x) {
                kt = true; 
                break;
            }
        }
    }

    cout << (kt ? "YES" : "NO");
    return 0;
}