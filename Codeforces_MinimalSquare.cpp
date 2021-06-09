#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 long long tCase;
 cin >> tCase;

 while (tCase--)
 {
  int m, n;
  cin >> m >> n;

  int maxi = max(m, n);
  int mini = min(m, n);

  if (maxi == mini)
  {
   cout << pow(maxi * 2, 2) << endl;
  }
  else if (mini * 2 <= maxi)
  {
   cout << pow(maxi, 2) << endl;
  }
  else
  {
   cout << pow(mini * 2, 2) << endl;
  }
 }

 return 0;
}