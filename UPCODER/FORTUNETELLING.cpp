#include <bits/stdc++.h>
using namespace std;

int day, month, year, n;
int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

bool isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    cin >> month >> day >> year >> n;

    if (isLeapYear(year)) 
        days[2] = 29;
    
    while (n) {
        int dayCur = days[month];

        if (day + n <= dayCur) {
            day += n;
            break;
        } else {
            n -= dayCur - day + 1;
            day = 1;

            if (month == 12) {
                month = 1;
                year++;
            } else 
                month++;
        }

        if (isLeapYear(year)) 
            days[2] = 29;
        else 
            days[2] = 28;
    }

    int sumDay = 0;
    for (int i = 1; i < month; i++) 
        sumDay += days[i];
    sumDay += day;

    int N = year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + sumDay - 1;
    cout << weekdays[N % 7] << ", ";

    if (month < 10) 
        cout << 0;
    cout << month << '/';

    if (day < 10)
        cout << 0;
    cout << day << '/';

    cout << year;
    return 0;
}