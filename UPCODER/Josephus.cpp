#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = i + 1;

    int *ptr = arr;
    int *ptrEnd = arr + N;

    while (arr != ptrEnd) {
        int tmp = M;

        while (--tmp) {
            ptr++;

            if (ptr == ptrEnd)
                ptr = arr;
        }

        cout << *ptr << " ";

        for (int *i = ptr; i != ptrEnd - 1; i++)
            *i = *(i + 1);
        ptrEnd--;

        if (ptr == ptrEnd) ptr = arr;
    }

    delete[] arr;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N, M; 
//     cin >> N >> M;

//     vector<int> vec;
//     for (int i = 1; i <= N; i++)
//         vec.push_back(i);

//     vector<int>::iterator it = vec.begin();
//     while(!vec.empty()) {
//         int tmp = M;

//         while (--tmp) {
//             it++;
//             if (it == vec.end())
//                 it = vec.begin();
//         }

//         cout << *it << " ";
//         vec.erase(it);
//         if (it == vec.end())
//             it = vec.begin();
//     }

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;
//     int n, m; 
//     cin >> n >> m;

//     for (int i = 1; i <= n; i++)
//         q.push(i);

//     int value = m;

//     while (!q.empty()) {
//         if (value == 1) {
//             cout << q.front() << " ";
//             value = m;
//         } else {
//             q.push(q.front());
//             value--;
//         }
//         q.pop();
//     }

//     return 0;
// }