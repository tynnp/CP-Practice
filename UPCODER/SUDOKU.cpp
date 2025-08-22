#include <iostream>
using namespace std;

const int SIZE = 9;

void inSudoku(int bang[SIZE][SIZE]) {
    for (int hang = 0; hang < SIZE; hang++) {
        for (int cot = 0; cot < SIZE; cot++)
            cout << bang[hang][cot] << " ";
        cout << '\n';
    }
}

bool laAnToan(int bang[SIZE][SIZE], int hang, int cot, int num) {
    for (int x = 0; x < SIZE; x++)
        if (bang[hang][x] == num || bang[x][cot] == num)
            return false;
    int hangBatDau = hang - hang % 3, cotBatDau = cot - cot % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (bang[i + hangBatDau][j + cotBatDau] == num)
                return false;
    return true;
}

bool timViTriChuaGanGiaTri(int bang[SIZE][SIZE], int &hang, int &cot) {
    for (hang = 0; hang < SIZE; hang++)
        for (cot = 0; cot < SIZE; cot++)
            if (bang[hang][cot] == 0)
                return true;
    return false;
}

bool giaiSudoku(int bang[SIZE][SIZE]) {
    int hang, cot;
    if (!timViTriChuaGanGiaTri(bang, hang, cot))
        return true;
    for (int num = 1; num <= SIZE; num++) {
        if (laAnToan(bang, hang, cot, num)) {
            bang[hang][cot] = num;
            if (giaiSudoku(bang))
                return true;
            bang[hang][cot] = 0;
        }
    }
    return false;
}

int main() {
    int bang[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> bang[i][j];

    if (giaiSudoku(bang))
        inSudoku(bang);
    else
        cout << "-1";

    return 0;
}
