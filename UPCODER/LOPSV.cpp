#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Nguoi {
private:
    string hoTen;
    int namSinh;
    string queQuan;

public:
    Nguoi() {}
    ~Nguoi() {}

    void nhap() {
        getline(cin, hoTen);
        cin >> namSinh; cin.ignore();
        getline(cin, queQuan);
    }

    void xuat() {
        cout << "Ho Ten: " << hoTen << endl;
        cout << "Nam Sinh: " << namSinh << endl;
        cout << "Que quan: " << queQuan << endl;
    }

    string getHoTen() {
        return hoTen;
    }

    int getNamSinh() {
        return namSinh;
    }

    string getQueQuan() {
        return queQuan;
    }

    void setHoTen(string hoTen) {
        hoTen = hoTen;
    }

    void setNamSinh(int namSinh) {
        namSinh = namSinh;
    }

    void setQueQuan(string queQuan) {
        queQuan = queQuan;
    }
};

class SinhVien : public Nguoi {
private:
    string khoa;
    vector<double> diemCacMon;
public:
    ~SinhVien() {}

    SinhVien() {}

    void nhap() {
        Nguoi::nhap();
        getline(cin, khoa);
        double diem;
        while (cin >> diem) 
            diemCacMon.push_back(diem);
    }

    double diemTrungBinh() {
        double res = 0;
        for (double x : diemCacMon) res += x;
        return res / diemCacMon.size();
    }

    void xuat() {
        Nguoi::xuat();
        cout << "Khoa: " << khoa << endl;

        cout << "Diem cac mon: ";
        for (double x : diemCacMon)    
            cout << x << " ";

        cout << endl << fixed << setprecision(2);
        cout << "Diem trung binh: " << diemTrungBinh();
    }

    void setKhoa(string khoa) {
        khoa = khoa;
    }

    void setDiemCacMon(vector<double> diem) {
        diemCacMon = diem;
    } 

    string getKhoa() {
        return khoa;
    }

    vector<double> getDiemCacMon() {
        return diemCacMon;
    }
};

int main() {
    SinhVien sv; 
    sv.nhap();
    sv.xuat();
    return 0;
}