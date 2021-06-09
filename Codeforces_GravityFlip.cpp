
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long nmbrOfcolm;
    cin >> nmbrOfcolm;

    vector < long long > colmSize;

    while(nmbrOfcolm--) {
        long long carry;
        cin >> carry;

        colmSize.push_back(carry);
    }

    sort(colmSize.begin(), colmSize.end());

    for(long long i = 0; i < colmSize.size(); i++) {
        cout << colmSize[i] << " ";
    }

    cout << endl;











    return 0;
}
