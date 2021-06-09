#include<bits/stdc++.h>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    int a, b, x, nmbr = 0;

    while(testcase--) {
        cin >> a >> b >> x;
        if(a + b + x > 1) {
            nmbr++;
        }
    }

    cout << nmbr << endl;












    return 0;
}
