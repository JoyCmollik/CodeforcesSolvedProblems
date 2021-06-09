#include <bits/stdc++.h>

using namespace std;

int main() {
    int matrix[5][5];

    int row, column;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                row = i+1;
                column = j+1;
            }
        }
    }

    if(row > 3) {
        row -= 3;
    }
    else {
        row = 3 - row;
    }

    if(column > 3) {
        column -= 3;
    }
    else {
        column = 3 - column;
    }

    cout << row + column << endl;












    return 0;
}
