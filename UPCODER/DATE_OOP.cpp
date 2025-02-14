#include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day, month, year;
    int dayOfMonth[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool leapYear() {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

public:
    Date(int day = 1, int month = 1, int year = 1): day(day), month(month), year(year) {
        if (leapYear())
            dayOfMonth[2] = 29;
        else
            dayOfMonth[2] = 28;
    }

    Date(const Date &other) {
        day = other.day;
        month = other.month;
        year = other.year;
        
        if (leapYear())
            dayOfMonth[2] = 29;
        else 
            dayOfMonth[2] = 28;
    }

    friend istream &operator >> (istream &in, Date &d) {
        in >> d.day >> d.month >> d.year;

        if (d.leapYear())
            d.dayOfMonth[2] = 29;
        else 
            d.dayOfMonth[2] = 28;

        return in;
    }

    friend ostream &operator << (ostream &out, Date d) {
        out << setw(2) << setfill('0') << d.day << '/';
        out << setw(2) << setfill('0') << d.month << '/';
        out << setw(4) << setfill('0') << d.year;
        return out;
    }

    bool valid() {
        if (year < 1900)
            return false;

        if (month < 1 || month > 12) 
            return false;

        if (day < 1 || day > dayOfMonth[month])
            return false;

        return true;
    }

    Date prev() {
        int d = day, m = month, y = year;

        if (--d < 1) {
            m--;

            if (m < 1) {
                m = 12;
                y--;
            }

            d = dayOfMonth[m];
        }

        return Date(d, m, y);
    }

    Date next() {
        int d = day, m = month, y = year;   

        if (++d > dayOfMonth[month]) {
            d = 1;
            m++;
        }

        if (m > 12) {
            m = 1;
            y++;
        }

        return Date(d, m, y);
    }

    Date add(int k) {
        Date res(day, month, year);
        for (int i = 1; i <= k; i++)
            res = res.next();
        return res;
    }
};


int main() {
    int k;
    Date date;
    cin >> date >> k;
    
    if (!date.valid()) {
        cout << "KHONG HOP LE";
        return 0;
    }

    cout << date << '\n';
    cout << date.next() << '\n';
    cout << date.prev() << '\n';
    cout << date.add(k);
    return 0;
}