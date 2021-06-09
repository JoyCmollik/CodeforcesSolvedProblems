#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli isPositive(ulli a)
{
 ulli s = a;
 ulli sum = 0, m;
 while (a > 0)
 {
  m = a % 10;
  sum += m;
  a = a / 10;
 }

 for (ulli i = 2; i <= sum; i++)
 {
  if (s % i == 0 && sum % i == 0)
   return i;
 }
 return 1;
}

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  ulli n;
  cin >> n;

  while (1)
  {
   ulli ansr = isPositive(n);
   if (ansr == 1)
   {
    n++;
    continue;
   }
   else
   {
    cout << n << endl;
    break;
   }
  }
 }
 return 0;
}