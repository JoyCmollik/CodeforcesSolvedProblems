#include <bits/stdc++.h>

using namespace std;

int main() {
    string players;
    cin >> players;

    bool isDanger;

    for(int i = 0; i < players.size(); i++) {
        if((players[i] == '0' && players[i + 1] == '0' && players[i + 2] == '0' && players[i + 3] == '0' && players[i + 4] == '0' && players[i + 5] == '0' && players[i + 6] == '0') || (players[i] == '1' && players[i + 1] == '1' && players[i + 2] == '1' && players[i + 3] == '1' && players[i + 4] == '1' && players[i + 5] == '1' && players[i + 6] == '1')) {
            cout << "YES" << endl;
            isDanger = true;

            break;
        }
        else {
            isDanger = false;
        }
    }

    if(!isDanger) {
        cout << "NO" << endl;
    }












    return 0;
}
