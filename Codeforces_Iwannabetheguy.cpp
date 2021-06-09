
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;
    cin >> nmbr;

    vector < int > levelsList;
    int levelOfx, levelOfy;

    cin >> levelOfx;

    for(int i = 0; i < levelOfx; i++) {
        int carry;
        cin >> carry;

        levelsList.push_back(carry);
    }

    cin >> levelOfy;

    for(int i = 0; i < levelOfy; i++) {
        int carry;
        cin >> carry;

        levelsList.push_back(carry);
    }

    sort(levelsList.begin(), levelsList.end());

    int level = 0;

    for(int i = 0; i < levelsList.size(); i++) {

        if( (i != 0) && (levelsList[i] == levelsList[i-1]) ) {
            continue;
        }
        else {
                level++;
        }
    }

    if(nmbr == level) {
    cout << "I become the guy." << endl;
    }
    else {
    cout << "Oh, my keyboard!" << endl;
    }












    return 0;
}
