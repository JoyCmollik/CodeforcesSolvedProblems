
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;
    cin >> nmbr;

    int posiOfresult1, posiOfresult2, nmbrOfodds = 0, nmbrOfevens = 0;

    for(int i = 0; i < nmbr; i++) {
        int checking;
        cin >> checking;

        if(checking % 2 == 0) {
            nmbrOfevens++;
            posiOfresult1 = i;
        }
        else {
            nmbrOfodds++;
            posiOfresult2 = i;
        }
    }

    if(nmbrOfevens == 1) {
        cout << posiOfresult1 + 1 << endl;
    }
    else {
        cout << posiOfresult2 + 1 << endl;
    }











    return 0;
}
