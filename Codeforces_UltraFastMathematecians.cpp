
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    unsigned long long sizeOfnmbr = a.length();
    unsigned long long i = 0;

    while(sizeOfnmbr--) {
        if(a[i] == b[i]) {
            cout << "0";
        }
        else {
            cout << "1";
        }

        i++;
    }

    cout << endl;











    return 0;
}
