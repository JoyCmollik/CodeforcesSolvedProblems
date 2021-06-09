#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int n, m;
 cin >> n >> m;

 int answ = 0;
 answ += n;
 while (1)
 {
  int a = n / m;
  answ += a;
  int b = n % m;
  if (a + b < m)
   break;
  else
   n = a + b;
 }

 cout << answ << endl;

 return 0;
}