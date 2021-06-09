
#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;
    cin >> nmbr;

    vector < char > listOfletters;

    while(nmbr--) {
        char letter;
        cin >> letter;

        listOfletters.push_back(letter);
    }

    char ch = 97;
    bool found = false;

    for(int i = 0; i < 26; i++) {
        found = false;
        for(int x = 0; x < listOfletters.size(); x++) {
            if(listOfletters[x] >= 'A' && listOfletters[x] <= 'Z') {
                listOfletters[x] += 32;
            }

            if(ch == listOfletters[x]) {
                found = true;
                break;
            }
        }
        if(found) {
            ch++;
            continue;
        }
        else {
            break;
        }
    }

    if(found) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }











    return 0;
}
