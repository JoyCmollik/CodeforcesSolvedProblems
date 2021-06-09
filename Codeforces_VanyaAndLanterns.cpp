
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long n, l;
    cin >> n >> l;

    vector < unsigned long long > listOfLanterns;

    for(unsigned long long i = 0; i < n; i++) {
        unsigned long long lanternDistance;
        cin >> lanternDistance;

        listOfLanterns.push_back(lanternDistance);
    }

    sort(listOfLanterns.begin(), listOfLanterns.end());

    unsigned long long maxDifference = 0;

    for(unsigned long long x = 0; x < listOfLanterns.size() - 1; x++) {
        unsigned long long singleDifference = listOfLanterns[x + 1] - listOfLanterns[x];
        if(maxDifference < singleDifference) {
            maxDifference = singleDifference;
        }
        else {
            continue;
        }
    }

    unsigned long long reslt = maxDifference / 2;

    cout << setprecision(10) << reslt << endl;











    return 0;
}
