#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int costBanana, pDollars, nBananas;
    cin >> costBanana >> pDollars >> nBananas;

    long long int pOfbanana = 0;

    for(int i = 0; i < nBananas; i++) {
        pOfbanana += (i+1) * costBanana;
    }

    long long int bDollars = pOfbanana - pDollars;

    if(pDollars > pOfbanana) {
        cout << "0" << endl;
    }
    else {
        cout << bDollars << endl;
    }














    return 0;
}
