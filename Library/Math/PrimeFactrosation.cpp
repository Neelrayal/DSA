/**
 * @brief Prime factorisation of a number x
 * Related Problems: 
 *  https://codeforces.com/problemset/problem/1823/C
 */

map <int,int> a;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    for (int j = 2; j * j <= x; j++) {
        while (x % j == 0) {
            x /= j;
            a[j]++;
        }
    }
    if (x != 1) {
        a[x]++;
    }
}

