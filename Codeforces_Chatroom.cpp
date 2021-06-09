#include <bits/stdc++.h>

using namespace std;

int main() {
    string vasyaWord;
    cin >> vasyaWord;

    string rightWord = "hello";

    int sz = vasyaWord.size();
    if(sz > 100) {
        return 0;
    }

    int j = 0;
    bool isManaged = false;

    for(int i = 0; i < sz; i++) {
            if(vasyaWord[i] >= 'A' && vasyaWord[i] <= 'Z') {
                return 0;
            }
            else if(vasyaWord[i] >= 'a' && vasyaWord[i] <= 'z') {
                if(rightWord[j] == vasyaWord[i]) {
                     j++;
                    if(j == 5) {
                    isManaged = true;
               }
            }
            else {
            continue;
            }
            }
    }

    if(isManaged) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }












    return 0;
}
