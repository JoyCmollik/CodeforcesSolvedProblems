
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int nOftestcase;
    cin >> nOftestcase;

    while(nOftestcase--) {
        unsigned long long chckNmbr;
        cin >> chckNmbr;

        bool found = false;

        for(unsigned long long i = 3; i <= chckNmbr; i+=2) {
            if(chckNmbr % i == 0) {
                cout << "executed";

                if(i % 2 != 0) {
                    found = true;
                    break;
                }

            }

        }

        if(found == false) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

    }











    return 0;
}
