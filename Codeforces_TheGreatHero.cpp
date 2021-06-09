
#include <bits/stdc++.h>

using namespace std;


int main() {
    unsigned long long tCase;
    cin >> tCase;

    while(tCase--) {
        unsigned long long atOfhero, heOfhero, nOfmons;
        vector < unsigned long long > atOfmons;
        vector < unsigned long long > heOfmons;
        bool monsDead = false;

        cin >> atOfhero >> heOfhero >> nOfmons;

        for(unsigned long long i = 0; i < nOfmons; i++) {
            unsigned long long atCarry;
            cin >> atCarry;

            atOfmons.push_back(atCarry);
        }

        for(unsigned long long i = 0; i < nOfmons; i++) {
            unsigned long long heCarry;
            cin >> heCarry;

            heOfmons.push_back(heCarry);
        }

        for(unsigned long long i = 0; i < nOfmons; i++) {
            if(heOfhero < atOfmons[i]) {
                monsDead = false;
                break;
            }
            unsigned long long attacks = heOfmons[i] / atOfhero;
            if(heOfmons[i] % atOfhero != 0) {
                attacks++;
            }
            heOfhero -= (attacks * atOfmons[i]);
            heOfmons[i] -= ( atOfhero * attacks );

            if(heOfmons[i] <= 0) {
                monsDead = true;
            }
            else {
                monsDead = false;
                break;
        }
    }

    if(monsDead && heOfhero > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    }











    return 0;
}
