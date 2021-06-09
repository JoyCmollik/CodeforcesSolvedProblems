#include <bits/stdc++.h>

using namespace std;

int main() {
    string  word;
    getline(cin, word);

    for(int i = 0; i < word.size(); i++) {
        if(word[i] == 'A' || word[i] == 'a' || word[i] == 'O' || word[i] == 'o' || word[i] == 'Y' || word[i] == 'y' || word[i] == 'E' || word[i] == 'e' || word[i] == 'U' || word[i] == 'u' || word[i] == 'I' || word[i] == 'i') {
            continue;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z') {
            int as = word[i] + 32;

            cout << ".";
            cout << char(as);
        }
        else {
            cout << "." << word[i];
        }
    }
    cout << endl;













    return 0;
}
