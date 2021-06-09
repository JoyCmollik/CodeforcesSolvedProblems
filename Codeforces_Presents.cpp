#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ar1[n-1], ar2[n-1];

    for(int i = 0; i < n; i++) {
        cin >> ar1[i];

        int temp = ar1[i];
        ar2[temp - 1] = i+1;
    }

    int j = 0;
    while(j != n) {
        cout << ar2[j] << " ";
        j++;
    }

    cout << endl;










    return 0;
}
