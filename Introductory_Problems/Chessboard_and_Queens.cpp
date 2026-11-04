// Section: Introductory Problems
// Problem: Chessboard and Queens

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    long long ans = 0;

    while(n >= 5) {
        n = n / 5;
        ans += n;
    }

    cout << ans;
    return 0;
}
