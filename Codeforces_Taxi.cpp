#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int nOfgroups;
    cin >> nOfgroups;

    long long int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    long long int nOfc = 0;

    for(long long int i = 0; i < nOfgroups; i++) {
            int group;
            cin >> group;

            if(group == 1) {
                n1++;
            }
            else if(group == 2) {
                n2++;
            }
            else if(group == 3) {
                n3++;
            }
            else if(group == 4) {
                n4++;
            }
    }

    cout << n1 << "  <- n1  " << n2 << "  <- n2  " << n3 << "  <- n3  " << n4 << "  <- n4  " << endl;

    if(n4 != 0) {
        nOfc += n4;
        n4 = 0;
    }

    if(n3 > n1) {
        long long int calc = n3 - n1;
        nOfc += n1;
        n1 = 0;
        n3 = calc;
    }
    else if(n1 > n3) {
        int calc = n1 - n3;
        nOfc += n3;
        n3 = 0;
        n1 = calc;
    }
    else if(n1 == n3) {
        nOfc += n1;
        n1 = 0;
        n3 = 0;
    }

    if(n2 > 0 && n2 % 2 == 0) {
        nOfc += (n2 / 2);
        n2 = 0;
    }
    else if(n2 > 0 && n2 % 2 != 0) {
        nOfc += (n2 / 2);
        n2 = (n2 % 2);
    }

    if(n1 > 0) {
        while(n1 != 0) {
            if(n1 >= 2 && n2 > 0) {
                nOfc++;
                n2--;
                n1 -= 2;
            }
            else if(n1 >= 4) {
                nOfc++;
                n1 -= 4;
            }
            else {
                nOfc++;
                n1 = 0;
            }
        }
    }

    if(n3 > 0) {
        nOfc += n3;
        n3 = 0;
    }

    if(n2 > 0) {
        nOfc++;
        n2 = 0;
    }

    cout << nOfc << "  <- nOfc  " << endl;
    cout << "aftr " << n1 << "  <- n1  " << n2 << "  <- n2  " << n3 << "  <- n3  " << n4 << "  <- n4  " << endl;












    return 0;
}
