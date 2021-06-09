
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbrOfRoom, pplLive, pplCapacity, roomAvailable = 0;

    cin >> nmbrOfRoom;

    while(nmbrOfRoom--) {
        cin >> pplLive >> pplCapacity;
        if(pplCapacity - pplLive >= 2) {
                roomAvailable++;
        }
    }

    cout << roomAvailable << endl;










    return 0;
}
