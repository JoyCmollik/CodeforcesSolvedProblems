
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << fixed << setprecision(12);
    float nmbr;
    cin >> nmbr;

    float fractionOfdrink = 100 / nmbr;

    float result = 0;

    while(nmbr--) {
        float d;
        cin >> d;

        float calc = ( ( fractionOfdrink * (d / 100) ) );
        result += calc;
    }

    cout << result << endl;













    return 0;
}
