#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ulli;

int main()
{
    ulli m, n, a;
    cin >> m >> n >> a;

    ulli nOfa = m / a;
    if (m % a != 0)
        nOfa++;
    ulli nOfb = n / a;
    if (n % a != 0)
        nOfb++;

    cout << nOfa * nOfb << endl;

    return 0;
}
