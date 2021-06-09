#include <bits/stdc++.h>

using namespace std;

int main() {
    int tCase;
    cin >> tCase;

    int x, y, z;
    int xCount = 0, yCount = 0, zCount = 0;

    while(tCase--) {
        cin >> x >> y >> z;
        xCount += x;
        yCount += y;
        zCount += z;
    }

    if(xCount == 0 && yCount == 0 && zCount == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }












    return 0;
}
