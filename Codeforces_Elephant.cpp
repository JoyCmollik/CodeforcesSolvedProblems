#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int dist;
    cin >> dist;

    long long int nOfstep = 0;

    int i = 5;

    while(dist != 0) {
            if(dist >= 5) {
                dist -= 5;
                nOfstep++;
            }
            else if(dist == 4) {
                dist -= 4;
                nOfstep++;
            }
            else if(dist == 3) {
                dist -= 3;
                nOfstep++;
            }
            else if(dist == 2) {
                dist -= 2;
                nOfstep++;
            }
            else if(dist == 1) {
                dist -= 1;
                nOfstep++;
            }
    }

    cout << nOfstep << endl;













    return 0;
}
