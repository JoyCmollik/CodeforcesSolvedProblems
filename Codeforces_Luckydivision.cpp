#include <bits/stdc++.h>

using namespace std;

int main() {
    string x = "4";
    cin >> x;

    bool isLucky = true;

    for(int i = 0; i < x.size(); i++) {
        if(x[i] == '4' || x[i] == '7') {
                continue;
        }
        else {
            isLucky = false;
            break;
        }
    }

    int cnvrtX;

    istringstream(x) >> cnvrtX;

    if(isLucky) {
        goto here;
    }
    else {
            if(cnvrtX % 4 == 0 || cnvrtX % 7 == 0 || cnvrtX % 47 == 0) {
                isLucky = true;
            }
        }

    here:
    if(isLucky) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }












    return 0;
}
