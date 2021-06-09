
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e6 + 5;
int a[SIZE];

int main() {
    int sOfa, nOfq;
    cin >> sOfa >> nOfq;

    int nOf1 = 0;

    for(int i = 0; i < sOfa; i++) {
        cin >> a[i];

        if(a[i] == 1) {
            nOf1++;
        }
    }

    for(int j = 0; j < nOfq; j++) {

        int t, k;
        cin >> t >> k;

        if(t==1) {
            if(a[k-1] == 0) {
                nOf1++;
            }
            else {
                nOf1--;
            }
            a[k-1] = 1 - a[k-1];
        }
        else {
            if(k <= nOf1) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }

    }











    return 0;
}
