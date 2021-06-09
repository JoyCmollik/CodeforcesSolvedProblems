#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli p, c;
 cin >> p >> c;

 for (ulli i = 1; i < 1000; i++)
 {
  if (((p * i) % 10 == c) || (p * i) % 10 == 0)
  {
   cout << i << endl;
   break;
  }
 }
 return 0;
}