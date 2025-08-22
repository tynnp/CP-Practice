#include <bits/stdc++.h>
using namespace std;

int dayOfMonth[] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

bool namNhuan(int n) {
    return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}

int check(int year, int month) {
    int day;
    if (month == 2) {
        if (namNhuan(year)) day = 29;
        else day = 28;
    } else day = dayOfMonth[month];
    return day;
}
 
int main() {
    int year, month; 
    cin >> year >> month;
    cout << check(year, month);
    return 0;
}