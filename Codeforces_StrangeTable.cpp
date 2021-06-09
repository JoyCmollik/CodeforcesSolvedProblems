#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli getRows(ulli r, ulli c, ulli cell)
{
 ulli column, row;

 if (r * c == cell)
  return cell;

 if (cell % r == 0)
 {
  column = (cell / r);
  row = r;

  return ((row - 1) * c) + column;
 }
 else
 {
  column = (cell / r) + 1;
 }

 if (column == 1)
 {
  row = cell;
  return (c * (cell - 1)) + 1;
 }
 else
 {
  row = cell - ((cell / r) * r);
 }

 return ((row - 1) * c) + column;
}

int main()
{
 ulli tCase;
 cin >> tCase;

 while (tCase--)
 {
  ulli p, q, s;
  cin >> p >> q >> s;

  cout << getRows(p, q, s) << endl;
 }
 return 0;
}