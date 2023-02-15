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
        for (size_t j{0}; j < i; j++) cout << " ";
        for (size_t k{1}; k < 2 * (n - i); k++) cout << "*";
        cout << endl;
    }
}