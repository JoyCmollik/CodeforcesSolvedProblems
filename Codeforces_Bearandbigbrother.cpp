#include <bits/stdc++.h>

using namespace std;

int main() {
    int limak, bob;
    cin >> limak >> bob;

    int nOfyears = 0;

    while(1) {
        nOfyears++;
        bob = bob * 2;
        limak = limak * 3;
        if(limak > bob) {
                cout << nOfyears << endl;
                break;
        }
    }












    return 0;
}
