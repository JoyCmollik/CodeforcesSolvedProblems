#include <bits/stdc++.h>

using namespace std;

int main() {
    int nOftramstop;
    cin >> nOftramstop;

    int nOfpassengers = 0, minCapacity = 0;

    for(int i = 0; i < nOftramstop; i++) {
        int nOfexit, nOfenter;
        cin >> nOfexit >> nOfenter;

        if((i == 0 && nOfexit != 0) || (i == nOftramstop - 1 && nOfenter != 0)) {
            return 0;
        }

        nOfpassengers = (nOfpassengers + nOfenter) - nOfexit;
        if(nOfpassengers >= minCapacity) {
            minCapacity = nOfpassengers;
        }
    }

    cout << minCapacity << endl;











    return 0;
}
