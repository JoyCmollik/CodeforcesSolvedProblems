#include <bits/stdc++.h>

using namespace std;

int main() {
    int nmbr;

    int result = 0;

    cin >> nmbr;
    while(nmbr--) {
        string oper;
        cin >> oper;
        if(oper == "++x" || oper == "++X" || oper == "x++" || oper == "X++") {
            result++;
        }
        else if(oper == "--x" || oper == "--X" || oper == "x--" || oper == "X--") {
            result--;
        }
        else {
            break;
        }
    }
    cout << result;










    return 0;
}
