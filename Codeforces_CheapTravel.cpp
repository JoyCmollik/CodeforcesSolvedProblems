#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli n, m, a, b;
 cin >> n >> m >> a >> b;

 ulli cost;

 if (m * a >= b)
 {
  ulli ride = n / m;
  ulli left = n % m;
  cost = (ride * b);
  if (left * a <= b)
   cost += left * a;
  else
   cost += b;
 }
 else
 {
  cost = n * a;
 }

 cout << cost << endl;

 return 0;
}