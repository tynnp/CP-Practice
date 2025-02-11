#include <bits/stdc++.h>
using namespace std;

struct Date {
    int ngay, thang, nam;
    int val[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    Date prev() {
        Date res = *this;
        res.ngay -= 1;
        
        if (res.ngay < 1) 
            res.thang -= 1;
        
        if (res.thang < 1) {
            res.nam -= 1;
            res.thang = 12;
        }
        
        if (res.nam % 400 == 0 || (res.nam % 4 == 0 && res.nam % 100 != 0))
            res.val[2] = 29;
        else 
            res.val[2] = 28;
            
        if (res.ngay < 1)     
            res.ngay = res.val[res.thang];
        return res;
    }
    
    Date next() {
        Date res = *this;
        res.ngay += 1;
        
        if (res.ngay > res.val[res.thang]) {
            res.ngay = 1;
            res.thang += 1;
        }
        
        if (res.thang > 12) {
            res.thang = 1;
            res.nam += 1;
        }
        
        if (res.nam % 400 == 0 || (res.nam % 4 == 0 && res.nam % 100 != 0))
            res.val[2] = 29;
        else 
            res.val[2] = 28;
            
        return res;
    } 

    bool valid() {
        if (nam < 1)
            return false;

        if (thang < 1 || thang > 12)
            return false;

        if (ngay < 1 || ngay > val[thang])
            return false;
        
        return true;
    }
};

istream &operator >> (istream &in, Date &d) {
    in >> d.ngay >> d.thang >> d.nam;
    
    if (d.nam % 400 == 0 || (d.nam % 4 == 0 && d.nam % 100 != 0))
        d.val[2] = 29;
    else 
        d.val[2] = 28;
    
    return in;
}

ostream &operator << (ostream &out, Date d) {
    out << d.ngay << '/' << d.thang << '/' << d.nam;
    return out;
}

int main() {
    Date d;
    cin >> d;

    if (d.val()) {
        cout << d.prev() << endl;
        cout << d.next();
    } else 
        cout << "INVALID";
        
    return 0;
}
