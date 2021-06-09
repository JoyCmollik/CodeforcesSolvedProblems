#include <bits/stdc++.h>

using namespace std;

int main() {
    int nOfcoins;
    cin >> nOfcoins;

    vector < int > bagOfcoins;
    int finalCoins = 0;

    while(nOfcoins--) {
        int coin;
        cin >> coin;

        bagOfcoins.push_back(coin);
    }

    sort(bagOfcoins.begin(), bagOfcoins.end());

    int sz = (int)bagOfcoins.size();

    int myPrice = 0, other = 0;

    for(int i = sz - 1; i >= 0; i--) {
        myPrice += bagOfcoins[i];
        finalCoins++;

        other = 0;

        for(int j = 0; j < i; j++) {
            other += bagOfcoins[j];
        }

        if(myPrice > other) {
            cout << finalCoins << endl;
            break;
        }
    }












    return 0;
}
