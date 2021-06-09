#include <bits/stdc++.h>

using namespace std;

int main() {
    string wordS, wordT;
    cin >> wordS >> wordT;

    bool isTranslated = true;

    int szOft = wordT.size() - 1;

    for(int i = 0; i < wordS.size(); i++) {
        if(wordS[i] != wordT[szOft]) {
            isTranslated = false;
            break;
        }

        szOft--;
    }

    if(isTranslated) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }












    return 0;
}
