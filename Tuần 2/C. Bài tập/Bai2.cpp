#include <bits/stdc++.h>
using namespace std;


int main() {
    // if (ifstream("Ganyu.txt")) {
    //     freopen("Ganyu.txt", "r", stdin);
    //     freopen("Ganyuuu.txt", "w", stdout);
    // }
    int n, truoc;
    cin >> n;
    truoc = n;
    cout << truoc << " ";
    while (truoc > 0) {
        int k;
        cin >> k;
        if (k != truoc) {
            truoc = k;
            if (k < 0) {
                cout << -1;
                return 0;
            }
            cout << k << " ";
        }
        else continue;
    }

    return 0;



}