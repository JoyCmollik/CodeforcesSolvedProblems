#include<bits/stdc++.h>

using namespace std;

int main() {
    string gift1, gift2;

    cin >> gift1 >> gift2;

    bool isEqual = false, isBigger = false, isSmaller = false;

    int sz = gift1.size();
    for(int i = 0; i < sz; i++) {
        if(gift1[i] >= 'A' && gift1[i] <= 'Z') {
            gift1[i] += 32;
        }
        if(gift2[i] >= 'A' && gift2[i] <= 'Z') {
            gift2[i] += 32;
        }

        if(gift1[i] == gift2[i]) {
            isEqual = true;
        }
        else if(gift1[i] > gift2[i]) {
            isEqual = false;
            isBigger = true;

            break;
        }
        else {
            isEqual = false;
            isSmaller = true;

            break;
        }
    }

    if(isEqual) {
        cout << "0";
    }
    else if(isBigger) {
        cout << "1";
    }
    else {
        cout << "-1";
    }
    cout << endl;












    return 0;
}
