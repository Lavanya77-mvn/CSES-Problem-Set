// Section: Introductory Problems
// Problem: Coin Piles


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;

    if ((2*a - b) % 3 == 0 && (2*b - a) % 3 == 0) {
        ll x = (2*a - b) / 3;
        ll y = (2*b - a) / 3;

        if (x >= 0 && y >= 0) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
