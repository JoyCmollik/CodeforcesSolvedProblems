
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b , c;

    cin >> a >> b >> c;

    int maxi = 0;

    int op1 = a * b  * c;

    if(op1 > maxi) {
        maxi = op1;
    }

    int op2 = (a + b) * c;

    if(op2 > maxi) {
        maxi = op2;
    }

    int op3 = a * (b + c);

    if(op3 > maxi) {
        maxi = op3;
    }

    int op4 = a + b * c;

    if(op4 > maxi) {
        maxi = op4;
    }

    int op5 = a + b + c;

    if(op5 > maxi) {
        maxi = op5;
    }

    cout << maxi << endl;











    return 0;
}
