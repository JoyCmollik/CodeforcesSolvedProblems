
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long nmbr;

    cin >> nmbr;

    unsigned long long nOfevens, nOfodds;

    nOfevens = nmbr / 2;
    nOfodds = (nmbr /2) + (nmbr % 2);

    long long result = ( ( (nOfevens * nOfevens) + nOfevens) - (nOfodds * nOfodds) );

    cout << result << endl;











    return 0;
}
