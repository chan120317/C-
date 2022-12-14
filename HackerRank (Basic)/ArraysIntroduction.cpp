#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
* Platform : HackerRank
* Title : Arrays Introduction
* Rank : Basic
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    return 0;
}