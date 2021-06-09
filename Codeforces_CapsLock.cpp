
#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    bool needChange = true;

    if(word.length() > 1) {
            for(int i = 1; i < word.length(); i++) {
                if(word[i] >= 'a' && word[i] <= 'z') {
                    needChange = false;
                    break;
                }
            }
    }
    else {
        if(word[0] >= 'a' && word[0] <= 'z') {
            word[0] -= 32;
            needChange = false;
        }
    }

    if(needChange) {
        if(word[0] >= 'a' && word[0] <= 'z') {
           word[0] -= 32;
        }
        else {
            word[0] += 32;
        }

        for(int j = 1; j < word.length(); j++) {
            word[j] += 32;
        }
    }

    cout << word << endl;












    return 0;
}
