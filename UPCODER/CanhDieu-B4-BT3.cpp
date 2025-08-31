#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int banA = (a + 1) / 2;
    int banB = (b + 1) / 2;
    int banC = (c + 1) / 2;
    int tongBan = banA + banB + banC;

    cout << "Số bàn tối thiểu cần mua: " << tongBan;
    return 0;
}