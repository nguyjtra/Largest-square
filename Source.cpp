#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    long long l = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            long long k = 0;
            for (int u = i; u < i + 3; u++) {
                for (int p = j; p < j + 3; p++) {
                    k += a[u][p];
                }
            }
            l = max(l, k);
        }
    }
    cout << l;
    return 0;
}
