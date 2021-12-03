#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    string t = "oxxoxxoxxoxxoxxoxxo";
    cin >> s;
    if (t.find(s) != string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    solve();
    return 0;
}