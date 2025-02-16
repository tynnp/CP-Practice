#include <iostream>
#include <cmath>
using namespace std;

struct Date {
    int ngay, thang, nam;
    int ngayCuaThang[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool kiemTraNamNhuan() {
        return nam % 400 == 0 || 
        (nam % 4 == 0 && nam % 100 != 0);
    }

    void setSoNgay() {
        if (kiemTraNamNhuan()) ngayCuaThang[0] = 366;
        else ngayCuaThang[0] = 365;
    }

    bool kiemTraHopLe() {
        if (nam < 1900) return false;
        if (thang < 1 || thang > 12) return false;
        if (ngay < 1 || ngay > ngayCuaThang[thang]) return false;
        return true;
    }

    Date ngayKeTiep() {
        Date res;
        res.ngay = ngay + 1;
        res.thang = thang;
        res.nam = nam;

        if (res.ngay > ngayCuaThang[res.thang])
            res.ngay = 1, res.thang += 1;

        if (res.thang > 12) 
            res.thang = 1, res.nam += 1;

        return res;
    }
};

istream& operator >> (istream &in, Date &date) {
    in >> date.ngay >> date.thang >> date.nam;
    
    if (date.kiemTraNamNhuan()) date.ngayCuaThang[2] = 29;
    else date.ngayCuaThang[2] = 28;
    
    date.setSoNgay();
    return in;
}

ostream& operator << (ostream &out, Date date) {
    out << date.ngay << "-";
    out << date.thang << "-";
    out << date.nam;
    return out;
}

int main() {
    Date a;
    cin >> a;

    if (a.kiemTraHopLe()) 
        cout << "YES\n" << a.ngayKeTiep();
    else cout << "NO";

    return 0;
}