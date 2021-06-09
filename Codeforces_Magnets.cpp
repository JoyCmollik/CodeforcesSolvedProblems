
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int nOfpoles;
    cin >> nOfpoles;

    vector < string > setOfpoles;

    while(nOfpoles--) {
        string pole;
        cin >> pole;

        setOfpoles.push_back(pole);
    }

    string comparingPole = setOfpoles[0];
    long long int groups = 1;

    for(int i = 1; i < setOfpoles.size(); i++) {
        if(setOfpoles[i] == comparingPole) {
            continue;
        }
        else if(setOfpoles[i] != comparingPole) {
            groups++;
            comparingPole = setOfpoles[i];
        }
    }

    cout << groups << endl;













    return 0;
}
