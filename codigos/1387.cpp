// https://www.urionlinejudge.com.br/judge/pt/problems/view/1387
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        cout << a + b << '\n';
    }
    return 0;
}