#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli tCase;
 cin >> tCase;

 while (tCase--)
 {
  ulli n;
  cin >> n;

  if (n % 2 != 0)
   n--;

  cout << n / 2 << endl;
 }

 return 0;
}