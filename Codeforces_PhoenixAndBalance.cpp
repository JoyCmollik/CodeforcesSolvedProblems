#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int tCase;
 cin >> tCase;

 while (tCase--)
 {
  int n;
  cin >> n;

  int pile1 = 0, pile2 = 0;

  int point = 2;

  for (int i = 0; i < n; i++)
  {
   if (i < (n - 1) / 2 || i == n - 1)
    pile1 += point;
   else
    pile2 += point;
   point *= 2;
  }

  cout << abs(pile1 - pile2) << endl;
 }

 return 0;
}