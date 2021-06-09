#include<bits/stdc++.h>

using namespace std;

int main() {
    string sumLine;
    cin >> sumLine;

    int countOne = 0, countTwo = 0, countThree = 0;

    for(int i = 0; i < sumLine.size(); i++) {
        if(sumLine[i] == '1') {
            countOne++;
        }
        else if(sumLine[i] == '2') {
            countTwo++;
        }
        else if(sumLine[i] == '3') {
            countThree++;
        }
        else {
            continue;
        }
    }

    int countPrint = 0;
    int countNmbrs = countOne + countTwo + countThree;

    if(countOne > 0) {
        while(countOne--) {
            cout << "1";
            countPrint++;

            if(countPrint != countNmbrs) {
                cout << "+";
            }
        }
    }

    if(countTwo > 0) {
        while(countTwo--) {
            cout << "2";
            countPrint++;

            if(countPrint != countNmbrs) {
                cout << "+";
            }
        }
    }

    if(countThree > 0) {
        while(countThree--) {
            cout << "3";
            countPrint++;

            if(countPrint != countNmbrs) {
                cout << "+";
            }
        }
    }

    cout << endl;













    return 0;
}


