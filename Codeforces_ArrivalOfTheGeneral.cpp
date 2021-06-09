
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;
    cin >> nmbr;

    int maxi = 0, mini = 9999, posiOfmaxi, posiOfmini;

    for(int i = 0; i < nmbr; i++) {
        int heightOfone;
        cin >> heightOfone;

        if(heightOfone > maxi) {
            maxi = heightOfone;
            posiOfmaxi = i;
        }

        if(heightOfone < mini) {
            mini = heightOfone;
            posiOfmini = i;
        }
        else if(heightOfone == mini && i > posiOfmini) {
            posiOfmini = i;
        }
    }

    int result = posiOfmaxi + ( (nmbr - 1) - posiOfmini );

    if(posiOfmini < posiOfmaxi) {
        result--;
    }

    cout << result << endl;










    return 0;
}
