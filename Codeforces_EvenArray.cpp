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

  int plbm0 = 0, plbm1 = 0;

  for (int i = 0; i < n; i++)
  {
   int temp;
   cin >> temp;

   if (i % 2 == 0 && temp % 2 == 1)
    plbm1++;
   else if (i % 2 == 1 && temp % 2 == 0)
    plbm0++;
  }

  if (plbm1 == plbm0)
   cout << plbm1 << endl;
  else
   cout << "-1" << endl;
 }

 return 0;
}