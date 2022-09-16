#include <iostream>
#include <cstdio>
#include <string>
#define endl '\n'
using namespace std;

/*
* Platform : HackerRank
* Title : For Loop
* Rank : Basic
*/

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;

    string numStr[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) cout << numStr[i] << endl;
        else if (i % 2) cout << "odd" << endl;
        else cout << "even" << endl;
    }
    return 0;
}
