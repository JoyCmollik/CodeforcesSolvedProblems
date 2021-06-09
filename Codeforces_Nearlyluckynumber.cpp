#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long int nOfluckynmbr = 0;

    for(long long int i = 0; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            nOfluckynmbr++;
        }
    }

    bool isLucky = false;

    if(nOfluckynmbr == 4 || nOfluckynmbr == 7 || nOfluckynmbr == 44 || nOfluckynmbr == 47 || nOfluckynmbr == 77 || nOfluckynmbr == 74)
    {
        isLucky = true;
    }

    if(isLucky) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }













    return 0;
}
