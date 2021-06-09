#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli getMoves(ulli difr)
{
 ulli moves;

 if (difr == 0)
  return 0;

 if (difr >= 10)
 {
  moves = difr / 10;
  if (difr % 10 > 0)
   moves++;
 }
 else
 {
  moves = 1;
 }

 return moves;
}

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  ulli a, b;
  cin >> a >> b;

  ulli difr;
  if (a > b)
   difr = a - b;
  else
   difr = b - a;

  ulli rslt = getMoves(difr);

  cout << rslt << endl;
 }

 return 0;
}