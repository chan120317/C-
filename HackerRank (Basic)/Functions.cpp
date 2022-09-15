#include <bits/stdc++.h>
#define FIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
using namespace std;

/*
* Platform : HackerRank
* Title : Functions
* Rank : Basic
*/

int max_of_four(int a, int b, int c, int d) {
    int ret = -1e9;
    ret = ret > a ? ret : a;
    ret = ret > b ? ret : b;
    ret = ret > c ? ret : c;
    ret = ret > d ? ret : d;
    return ret;
}

int main() {
    FIO;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;

    return 0;
}