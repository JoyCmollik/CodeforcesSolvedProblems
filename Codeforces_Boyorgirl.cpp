#include <bits/stdc++.h>

using namespace std;

int main() {
    string userName;
    cin >> userName;

    vector<char> distChar;

    for(int i = 0; i < userName.size(); i++) {
            if(userName[i] >= 'a' && userName[i] <= 'z') {
                int sz = (int)distChar.size();
                bool isDistinct = true;

        for(int j = 0; j < sz; j++) {
            if(userName[i] == distChar[j]) {
                isDistinct = false;
                break;
            }
        }

        if(isDistinct) {
            distChar.push_back(userName[i]);
        }
            }
            else {
                return 0;
            }
    }

    int sizeOfdistint = (int)distChar.size();

    if(sizeOfdistint % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }














    return 0;
}
