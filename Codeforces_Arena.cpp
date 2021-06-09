
#include <bits/stdc++.h>

using namespace std;

void countHerowinner(vector <int> heroLevels) {
    int countWinner = 0;
    for(int i = 0; i < heroLevels.size(); i++) {
        for(int x = 0; x < heroLevels.size(); x++) {
            if(i == x) {
                continue;
            }
            else if(heroLevels[x] < heroLevels[i]) {
                countWinner++;
                break;
            }
        }
    }
    cout << countWinner << endl;
}

int main() {
    int tCase;
    cin >> tCase;

    while(tCase--) {
        int nOfhero;
        cin >> nOfhero;

        vector < int > heroList;
        for(int i = 0; i < nOfhero; i++) {
            int heroLevel;
            cin >> heroLevel;

            heroList.push_back(heroLevel);
        }

        countHerowinner(heroList);
    }











    return 0;
}
