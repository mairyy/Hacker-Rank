#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort(int* a, int n){
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if (a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int A[N], B[N+1];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N+1; i++) cin >> B[i];
    sort(A, N);
    sort(B, N+1);
    int pos = -1;
    for (int i = 0; i < N; i++){
        if(A[i] != B[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1) pos = N;
    cout << B[pos];
    return 0;
}
