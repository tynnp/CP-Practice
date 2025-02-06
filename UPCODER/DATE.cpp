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
        return;
    }

    int demNgay() {
        int res = 0;
        for (int i = 1; i < this->thang; i++)
            res += this->ngayCuaThang[i];
        return res + this->ngay;
    }

    string thuTrongTuan() {
        int ngay = this->ngay;
        int thang = this->thang;
        int nam = this->nam;

        if (thang < 3) thang += 12, nam -= 1;
        int n = (ngay + 2*thang + (3*(thang+1))/5 + nam + (nam/4)) % 7;

        if (n == 0) return "Sunday";
        else if (n == 1) return "Monday";
        else if (n == 2) return "Tuesday";
        else if (n == 3) return "Wednesday";
        else if (n == 4) return "Thursday";
        else if (n == 5) return "Friday";
        else if (n == 6) return "Saturday";
    }

    Date ngayKeTiep() {
        Date res;
        res.ngay = this->ngay + 1;
        res.thang = this->thang;
        res.nam = this->nam;

        if (res.ngay > this->ngayCuaThang[res.thang])
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
    if (date.ngay < 10) out << 0;
    out << date.ngay << "/";

    if (date.thang < 10) out << 0;
    out << date.thang << "/";

    if (date.nam < 1000) out << 0;
    if (date.nam < 100) out << 0;
    if (date.nam < 10) out << 0;
    out << date.nam;

    return out;
}

bool operator == (Date a, Date b) {
    return  a.ngay == b.ngay && 
            a.thang == b.thang && 
            a.nam == b.nam;
}

bool kiemTraTrungThu(Date a, Date b) {
    return a.thuTrongTuan() == b.thuTrongTuan();
}

bool operator < (Date a, Date b) {
    if (a.nam < b.nam) 
        return true;

    if (a.nam == b.nam) {
        if (a.thang < b.thang) 
            return true;

        if (a.thang == b.thang) 
            if (a.ngay < b.ngay) 
                return true;
    }

    return false;
}

int operator - (Date a, Date b) {
    Date max, min;

    if (a < b) 
        max = b, min = a;
    else 
        max = a, min = b;

    int res = max.demNgay();

    while (--max.nam > min.nam) {
        max.setSoNgay();
        res += max.ngayCuaThang[0];
    }

    if (a.nam == b.nam) 
        return res - min.demNgay();
    else 
        return res + (min.ngayCuaThang[0] - min.demNgay());
}

int main() {
    Date a, b;
    cin >> a >> b;

    cout << a << " " << a.thuTrongTuan() << " " << a.demNgay() << " ";
    cout << a.ngayKeTiep() << " " << (a.kiemTraNamNhuan() ? "TRUE" : "FALSE") << endl;

    cout << b << " " << b.thuTrongTuan() << " " << b.demNgay() << " ";
    cout << b.ngayKeTiep() << " " << (b.kiemTraNamNhuan() ? "TRUE" : "FALSE") << endl;

    cout << (kiemTraTrungThu(a, b) ? "TRUE" : "FALSE") << endl;

    if (a < b) cout << "1 < 2";
    else if (a == b) cout << "1 = 2";
    else cout << "1 > 2";

    cout << endl << a - b;
    return 0;
}