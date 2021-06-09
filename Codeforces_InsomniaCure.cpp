
#include <bits/stdc++.h>

using namespace std;

vector < unsigned long long > listOfdragons;

void insertDragons(int xthDragon, unsigned long long totDragons) {
    unsigned long long temp, i = 1;

    while(1) {
        temp = xthDragon * i;
        if(temp > totDragons) {
            break;
        }
        else {
            listOfdragons.push_back(temp);
        }

        i++;
    }
}

int main() {
    int kthDragon, lthDragon, mthDragon, nthDragon;
    unsigned long long totDragon;

    cin >> kthDragon >> lthDragon >> mthDragon >> nthDragon >> totDragon;

    if(kthDragon == 1 || lthDragon == 1 || mthDragon == 1 || nthDragon == 1) {
        cout << totDragon << endl;
    }
    else {
        insertDragons(kthDragon, totDragon);
        insertDragons(lthDragon, totDragon);
        insertDragons(mthDragon, totDragon);
        insertDragons(nthDragon, totDragon);

        sort(listOfdragons.begin(), listOfdragons.end());

        unsigned long long harmDragons = 0;

        for(unsigned long long i = 0; i < listOfdragons.size(); i++) {
            if(listOfdragons[i] == listOfdragons[i - 1]) {
                continue;
            }
            else {
                harmDragons++;
            }
        }

        cout << harmDragons << endl;

    }











    return 0;
}
