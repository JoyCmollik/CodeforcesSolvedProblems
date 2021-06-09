#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbrOfcolors;
    cin >> nmbrOfcolors;

    string nameOfcolors;
    cin >> nameOfcolors;

    if(nmbrOfcolors != nameOfcolors.size()) {
        return 0;
    }

    int repeatingColors = 0;

    for(int i = 0; i < nameOfcolors.size(); i++) {
        if(nameOfcolors[i+1] == nameOfcolors[i]) {
            repeatingColors++;
        }
    }

    cout << repeatingColors;












    return 0;
}
