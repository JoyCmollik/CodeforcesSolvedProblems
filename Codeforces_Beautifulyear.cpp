#include <bits/stdc++.h>

using namespace std;

int main() {
    int y;
    cin >> y;

    y++;

    bool found = false;

    while(found != true) {
        stringstream cnvt;
        cnvt << y;
        string check = cnvt.str();
        if( (check[0] != check[1] && check[0] != check[2] && check[0] != check[3]) && (check[1] != check[0] && check[1] != check[2] && check[1] != check[3]) &&
           (check[2] != check[0] && check[2] != check[1] && check[2] != check[3]) && (check[3] != check[0] && check[3] != check[1] && check[3] != check[2]) ) {
            found = true;
            cout << y << endl;
            break;
           }
           else {
            y++;
           }
    }












    return 0;
}
