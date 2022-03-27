#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k;
    cin >> n >> q;
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[i] = new int [k];
        for (int j = 0; j < k; j++)
            cin >> a[i][j];
    }
    int Q[q][2];
    for (int i = 0; i < q; i++)
        for (int j = 0; j < 2; j++)
            cin >> Q[i][j];
    for (int i = 0; i < q; i++)
        cout << a[Q[i][0]][Q[i][1]] << endl;
    return 0;
}