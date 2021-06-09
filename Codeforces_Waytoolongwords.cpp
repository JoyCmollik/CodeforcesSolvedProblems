#include<bits/stdc++.h>

using namespace std;

int main() {
    string word;
    int testcase;

    cin >> testcase;

    while(testcase--) {
        cin >> word;

        if(word.size() > 10) {
                cout << word[0];
                int nmbr = 0;

                int sz = word.size();

            for(int i = 1; i < sz; i++) {
                if(i == sz - 1) {
                    cout << nmbr;
                }
                else {
                    nmbr++;
                }
            }
            cout << word[sz - 1] << endl;
        }
        else {
            cout << word << endl;
        }
    }












    return 0;
}
