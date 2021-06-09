
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int step = 0;

    while(1) {
        if(m == 0 || n == 0) {
            break;
        }

        m--;
        n--;

        step++;
    }

    if(step%2 == 0) {
        cout << "Malvika" << endl;
    }
    else {
        cout << "Akshat" << endl;
    }












    return 0;
}
