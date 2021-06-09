
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long nOfdays;
    cin >> nOfdays;

    long long maximumSegment = 0, tempMaximumSegment = 0;

    long long prevElement = 0;

    while(nOfdays--) {
        long long moneyOfiday;

        cin >> moneyOfiday;

        if(moneyOfiday > prevElement || moneyOfiday == prevElement) {
            tempMaximumSegment++;
        }
        else if(moneyOfiday < prevElement) {
                if(tempMaximumSegment > maximumSegment)
                {
                    maximumSegment = tempMaximumSegment;
                }

                tempMaximumSegment = 1;
        }

         prevElement = moneyOfiday;
    }

    if(tempMaximumSegment > maximumSegment) {
        maximumSegment = tempMaximumSegment;
    }

    cout << maximumSegment << "\n";











    return 0;
}
