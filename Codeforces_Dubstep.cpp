
#include <bits/stdc++.h>

using namespace std;

int main() {
    string mixedSong;
    cin >> mixedSong;

    bool space = true;

    for(int i = 0; i < mixedSong.length(); i++) {
        if(mixedSong[i] == 'W' && mixedSong[i+1] == 'U' && mixedSong[i+2] == 'B') {
            if(i != 0 && !space) {
                cout << " ";
            }
            space = true;
            i += 2;
        }
        else {
            cout << mixedSong[i];
            space = false;
        }
    }

    cout << endl;











    return 0;
}
