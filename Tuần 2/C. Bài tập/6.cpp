#include <bits/stdc++.h>
using namespace std;

int main() {
    if (ifstream("Ganyu.txt")) {
        freopen("Ganyu.txt", "r", stdin);
        freopen("Ganyuuu.txt", "w", stdout);
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) cout << j << " ";
        for (int k = 1; k <= i - 1; k++) cout << k << " ";
        cout << endl;
    }

}