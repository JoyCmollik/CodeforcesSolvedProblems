
#include <bits/stdc++.h>

using namespace std;

int main() {
    string firstName, scndName, messedName;
    cin >> firstName >> scndName >> messedName;

    string jointName = firstName + scndName;

    int counting = 0;

    if(jointName.length() < messedName.length() || jointName.length() > messedName.length()) {
            cout << "NO" << endl;
    }
    else {
        for(int i = 0; i < jointName.length(); i++) {
            for(int x = 0; x < messedName.length(); x++) {
                if(jointName[i] == messedName[x]) {
                    messedName[x] = ' ';
                    counting++;
                    break;
                }
            }
        }

        if(counting == messedName.length()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }










    return 0;
}
