#include <bits/stdc++.h>
using namespace std;

int day, month, year;
int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string weekdays[] = {"Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"};

int main() {
    cin >> day >> month >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days[2] = 29; 

    int sumDay = 0;
    for (int i = 1; i < month; i++)
        sumDay += days[i];
    sumDay += day; 

    int N = year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + sumDay - 1;
    cout << weekdays[N % 7];
    return 0;
}