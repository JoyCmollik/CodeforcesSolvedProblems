#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> ar;

    while (n--)
    {
        int score;
        cin >> score;
        ar.push_back(score);
    }

    int nmbr = 0;

    if (ar[k] != 0)
    {
        for (int i = 0; i < ar.size(); i++)
        {
            if (ar[i] >= ar[k])
            {
                nmbr++;
            }
        }
    }

    cout << nmbr << endl;

    return 0;
}
