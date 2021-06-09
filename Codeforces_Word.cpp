#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    int sz = word.size();

    int upperLetter = 0, smallerLetter = 0;

    for(int i = 0; i < sz; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            upperLetter++;
        }
        else if(word[i] >= 'a' && word[i] <= 'z') {
            smallerLetter++;
        }
    }

    bool isCapital = false, isSmaller = false;

    if(upperLetter > smallerLetter) {
        isCapital = true;
    }
    else if(upperLetter == smallerLetter || upperLetter < smallerLetter) {
        isSmaller = true;
    }

    for(int j = 0; j < sz; j++) {
        if(isCapital) {
            if(word[j] >= 'a' && word[j] <= 'z') {
                word[j] -= 32;
            }
            cout << word[j];
        }
        else if(isSmaller) {
            if(word[j] >= 'A' && word[j] <= 'Z') {
                word[j] += 32;
            }
            cout << word[j];
        }
    }












    return 0;
}
