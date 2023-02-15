#include <bits/stdc++.h>
using namespace std;
 
int main() {											
    int n, *a;
    cin >> n;
    a = new int [n];
    for (int i{0}; i < n; i++) cin >> a[i];
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) tong += a[i];
    cout << "Mean: " << 1.0 * tong / n << endl << "Max: " << a[n - 1] << endl
        << "Min: " << a[0];
}
