
#include <bits/stdc++.h>

using namespace std;

void neededTime(unsigned long long totHuses, vector < unsigned long long > totTakes) {
    unsigned long long curPosi = 1, reslt = 0;

    for(unsigned long long i = 0; i < totTakes.size(); i++) {
        if(totTakes[i] >= curPosi) {
                reslt += totTakes[i] - curPosi;
        }
        else if (totTakes[i] < curPosi) {
            reslt += (totHuses - curPosi + totTakes[i]);
        }
        curPosi = totTakes[i];
    }

    cout << reslt << endl;
}

int main() {
    unsigned long long nOfHouses, nOfTasks;
    cin >> nOfHouses >> nOfTasks;

    vector < unsigned long long > listOfTasks;

    while(nOfTasks--) {
        unsigned long long x;
        cin >> x;

        listOfTasks.push_back(x);
    }

    neededTime(nOfHouses, listOfTasks);











    return 0;
}
