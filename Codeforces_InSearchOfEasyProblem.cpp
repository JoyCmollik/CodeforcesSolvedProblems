
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool isEasy = true;

    while(n--) {
        int response;
        cin >> response;

        if(response == 1) {
            isEasy = false;
        }
    }

    if(!isEasy) {
        cout << "HARD\n";
    }
    else {
        cout << "EASY\n";
    }











    return 0;
}
