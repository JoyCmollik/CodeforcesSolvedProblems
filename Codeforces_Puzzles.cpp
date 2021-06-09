
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> n >> m;

    vector < long long > sizeOfpuzzle;

    while(m--) {
        long long carry;
        cin >> carry;

        sizeOfpuzzle.push_back(carry);
    }

    sort(sizeOfpuzzle.begin(), sizeOfpuzzle.end());

    long long diff = 9999999999999999;

    for(long long i = 0; i < sizeOfpuzzle.size(); i++) {
               if(i + n - 1 >= sizeOfpuzzle.size()) {
                break;
               }

               long long  diffOfab = ( sizeOfpuzzle[i + n - 1] - sizeOfpuzzle[i] );
               if(diffOfab < diff) {
                diff = diffOfab;
               }
    }

    cout << diff << endl;











    return 0;
}
