#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  ulli x, y, n;
  cin >> x >> y >> n;

  ulli mods = n % x;

  if (mods >= y)
  {
   n -= (mods - y);
  }
  else
  {
   n -= (mods + (x - y));
  }

  cout << n << endl;
 }

 return 0;
}