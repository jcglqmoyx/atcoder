#include <bits/stdc++.h>

using namespace std;

int f(int x) {
    return x * x + (x << 1) + 3;
}

int main() {
    int t;
    cin >> t;
    printf("%d\n", f(f(f(t) + t) + f(f(t))));
    return 0;
}