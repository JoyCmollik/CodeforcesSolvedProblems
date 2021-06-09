
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    vector < unsigned long long > listOfcolor;

    listOfcolor.push_back(s1);
    listOfcolor.push_back(s2);
    listOfcolor.push_back(s3);
    listOfcolor.push_back(s4);

    sort(listOfcolor.begin(), listOfcolor.end());

    int temp = 0;

    for(int i = 0; i < 4; i++) {
        if(listOfcolor[i] == listOfcolor[i - 1]) {
            continue;
        }
        else {
            temp++;
        }
    }

    cout << 4 - temp << endl;











    return 0;
}
