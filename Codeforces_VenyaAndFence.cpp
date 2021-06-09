#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int rslt = 0, i;

    while(n--) {
        cin >> i;
        if(i > h) {
            rslt += 2;
        }
        else {
            rslt++;
        }
    }

    cout << rslt << endl;












    return 0;
}
