
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long nmbr, posi, result;

    cin >> nmbr >> posi;

    unsigned long long dividingNmbr = (nmbr + (nmbr % 2)) / 2;

    if(posi <= dividingNmbr) {

            result = (posi * 2) - 1;

    }
    else {

        posi -= dividingNmbr;
        result = (posi * 2);

    }

    cout << result << endl;











    return 0;
}
