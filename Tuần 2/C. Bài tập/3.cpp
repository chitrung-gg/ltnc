#include <bits/stdc++.h>
using namespace std;

int main() {
    if (ifstream("Ganyu.txt")) {
        freopen("Ganyu.txt", "r", stdin);
        freopen("Ganyuuu.txt", "w", stdout);
    }
    long long n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        for (size_t j{i}; j < n - 1; j++) cout << " ";
        for (size_t k{0}; k < 2 * i + 1; k++) cout << "*";
        cout << endl;
    }
}