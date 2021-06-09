#include <bits/stdc++.h>

using namespace std;

unsigned long long balance;
unsigned long long remBalance, billsNeeded = 0;

unsigned long long getBills(unsigned long long bills) {
    if((balance / bills) > 0) {
        billsNeeded += balance / bills;
        remBalance = balance % bills;
        balance = remBalance;
    }
}

int main() {
    cin >> balance;

    getBills(100);
    getBills(20);
    getBills(10);
    getBills(5);

    if(balance < 5) {
        billsNeeded += balance;
    }

    cout << billsNeeded << endl;












    return 0;
}
