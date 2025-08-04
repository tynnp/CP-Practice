#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;

    bool namNhuan = nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0;

    if (ngay < 1 || thang < 1 || nam < 1 || thang > 12) {
        cout << "Khong hop le";
        return 0;
    }

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            cout << (ngay > 31 ? "Khong hop le" : "Hop le");
            break; 
        }

        case 4: case 6: case 9: case 11: {
            cout << (ngay > 30 ? "Khong hop le" : "Hop le");
            break;
        }

        case 2: {
            if (namNhuan && ngay > 29 || !namNhuan && ngay > 28)
                cout << "Khong hop le";
            else 
                cout << "Hop le";
        }
    }

    return 0;
}