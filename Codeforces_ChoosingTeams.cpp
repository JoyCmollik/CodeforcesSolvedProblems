#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int n, k;
 cin >> n >> k;

 int members = 0;

 while (n--)
 {
  int y;
  cin >> y;

  if (5 - y >= k)
   members++;
 }

 cout << members / 3 << endl;

 return 0;
}