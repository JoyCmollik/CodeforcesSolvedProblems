
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector < char > antonsLetters;
    while(1) {
        char word;
        cin >> word;

        if(word == ' ') {
            continue;
        }

        antonsLetters.push_back(word);

        if(word == '}') {
                break;
        }
    }

    vector < char > antonsDisLetters;

    for(int i = 1; i < antonsLetters.size() - 1; i+=2) {
        bool repeated = false;
        for(int j = 0; j < antonsDisLetters.size(); j++) {
            if(antonsLetters[i] == antonsDisLetters[j]) {
                repeated = true;
                break;
            }
        }

        if(repeated) {
            continue;
        }
        else {
                antonsDisLetters.push_back(antonsLetters[i]);
        }
    }

    cout << antonsDisLetters.size() << endl;











    return 0;
}
