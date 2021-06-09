#include <bits/stdc++.h>

using namespace std;

int main() {
    string p;
    cin >> p;

    int sz = p.size();
    bool isWorking = false;

    for(int i = 0; i < sz; i++) {
           if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES" << endl;
            isWorking = true;
            break;
        }
    }

    if(!isWorking) {
        cout << "NO" << endl;
    }











    return 0;
}
