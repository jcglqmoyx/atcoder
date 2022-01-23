#include <bits/stdc++.h>

using namespace std;

const int N = 15;

int a, b;
char s[N];

int main() {
    scanf("%s", s + 1);
    scanf("%d%d", &a, &b);
    swap(s[a], s[b]);
    printf("%s\n", s + 1);
    return 0;
}