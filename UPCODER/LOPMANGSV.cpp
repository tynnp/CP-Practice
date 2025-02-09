#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Diem {
private:
    int size;
    double* arr;

public:
    Diem() {}

    Diem(int size): size(size) {
        arr = new double[size];
    }

    Diem(const Diem &other) {
        size = other.size;
        arr = new double[size];
        for (int i = 0; i < size; i++) 
            arr[i] = other.arr[i];
    }

    ~Diem() {
        delete[] arr;
    }

    void setSize(int size) {
        size = size;
    }

    int getSize() {
        return size;
    }

    void setArr(double* arr) {
        arr = arr;
    }

    double* getArr() {
        return arr;
    }

    double &operator [] (int idx) {
        return arr[idx];
    }

    friend istream& operator >> (istream &in, Diem &diem) {
        diem.size = 0;
        diem.arr = new double[100];
        string tmp, tmp2;
        getline(in, tmp);
        stringstream ss(tmp);
        while (ss >> tmp2) 
            diem[diem.size++] = stod(tmp2);
        return in;
    }

    friend ostream& operator << (ostream &out, Diem diem) {
        for (int i = 0; i < diem.size; i++)
            out << diem[i] << " ";
        return out;
    }

    void operator = (Diem other) {
        size = other.size;
        arr = new double[other.size];
        for (int i = 0; i < other.size; i++)
            arr[i] = other[i];
    }

    double diemTrungBinh() {
        double res = 0;
        for(int i = 0; i < size; i++)
            res += arr[i];
        return res / size;
    }
};

class SinhVien {
private:
    string hoVaTen;
    string maSinhVien;
    Diem diem;

public:
    SinhVien() {}

    SinhVien(string hoVaTen, string maSinhVien, Diem diem):
        hoVaTen(hoVaTen), maSinhVien(maSinhVien), diem(diem) {}

    SinhVien(const SinhVien &sinhVien) {
        hoVaTen = sinhVien.hoVaTen;
        maSinhVien = sinhVien.maSinhVien;
        diem = sinhVien.diem;
    }

    ~SinhVien() {}

    void setHoVaTen(string hoVaTen) {
        hoVaTen = hoVaTen;
    }

    string getHoVaTen() {
        return hoVaTen;
    }

    void setMaSinhVien(string maSinhVien) {
        maSinhVien = maSinhVien;
    }

    string getMaSinhVien() {
        return maSinhVien;
    }

    void setDiem(Diem diem) {
        diem = diem;
    }

    Diem getDiem() {
        return diem;
    }

    double getDiemTrungBinh() {
        return diem.diemTrungBinh();
    }

    friend istream& operator >> (istream &in, SinhVien &sv) {
        getline(in, sv.hoVaTen);
        getline(in, sv.maSinhVien);
        in >> sv.diem; 
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien sv) {
        out << "Ho Ten: " << sv.hoVaTen << endl;
        out << "Ma Sinh Vien: " << sv.maSinhVien << endl;
        out << fixed << setprecision(1);
        out << "DTB: " << sv.diem.diemTrungBinh();
        return out;
    }
};

class MangSinhVien {
private:
    int size;
    SinhVien* arr;
    
public:
    MangSinhVien() {}

    MangSinhVien(int size, SinhVien* arr): size(size), arr(arr) {}

    MangSinhVien(const MangSinhVien &other) {
        size = other.size;
        arr = other.arr;
    }

    ~MangSinhVien() {}

    SinhVien &operator [] (int idx) {
        return arr[idx];
    }

    friend istream& operator >> (istream &in, MangSinhVien &msv) {
        in >> msv.size; 
        msv.arr = new SinhVien[msv.size];
        in.ignore();
        for (int i = 0; i < msv.size; i++) 
            in >> msv[i]; 
        return in;
    } 

    friend ostream& operator << (ostream &out, MangSinhVien msv) {
        for (int i = 0; i < msv.size; i++)
            out << msv[i] << endl;
        return out;
    }

    void operator = (MangSinhVien other) {
        size = other.size;
        arr = other.arr;
    }

    void setSize(int size) {
        size = size;
    }

    int getSize() {
        return size;
    }

    void setArr(SinhVien* arr) {
        arr = arr;
    }

    SinhVien* getArr() {
        return arr;
    }

    double diemTrungBinh() {
        double res = 0;
        for (int i = 0; i < size; i++)
            res += arr[i].getDiemTrungBinh();
        return res / size;
    }

    SinhVien diemLonNhat() {
        SinhVien res = arr[0];
        for (int i = 1; i < size; i++)
            if (res.getDiemTrungBinh() < arr[i].getDiemTrungBinh())
                res = arr[i];    
        return res;
    }

    int viTriLonNhat() {
        int idx = 0;
        double dtb = arr[0].getDiemTrungBinh();
        for (int i = 1; i < size; i++)
            if (dtb < arr[i].getDiemTrungBinh())
                dtb = arr[i].getDiemTrungBinh(), idx = i;
        return idx;
    }
};

int main() {
    MangSinhVien arr;
    cin >> arr;
    cout << arr.diemLonNhat();
    return 0;
}