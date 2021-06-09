
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long tcase;
    cin >> tcase;

    while(tcase--) {
            unsigned long long a, b;
            cin >> a >> b;

            if(a % b == 0) {
                cout << "0" << endl;
            }
            else if(a < b) {
                cout << b - a << endl;
            }
            else if(a > b) {
                cout << (((( a / b ) + 1 ) * b ) - a ) << endl;
            }
    }











    return 0;
}
