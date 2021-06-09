
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbrOfteams;
    cin >> nmbrOfteams;

    vector < int > colorOfteams;

    while(nmbrOfteams--) {
        int hostColor, guestColor;
        cin >> hostColor >> guestColor;

        colorOfteams.push_back(hostColor);
        colorOfteams.push_back(guestColor);
    }

    int changeIncolors = 0;

    for(int i = 0; i < colorOfteams.size(); i+=2) {
        for(int j = 1; j < colorOfteams.size(); j+=2) {
            if(colorOfteams[i] == colorOfteams[j]) {
                changeIncolors++;
            }
        }
    }

    cout << changeIncolors << endl;









    return 0;
}
