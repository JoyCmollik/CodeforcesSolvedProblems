#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int nOfa = 0, nOfb = 0;

    int sz = s.size();

    for(int i = 0; i < sz; i++) {
        if(s[i] == 'A') {
            nOfa++;
        }
        else if(s[i] == 'D') {
            nOfb++;
        }
    }

    if(nOfa > nOfb) {
        cout << "Anton";
    }
    else if(nOfb > nOfa) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
    cout << endl;












    return 0;
}
