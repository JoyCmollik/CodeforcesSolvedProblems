#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int n;
 cin >> n;

 int hired = 0, crime = 0;
 int untreated = 0;

 while (n--)
 {
  int a;
  cin >> a;

  if (a == -1 && hired == 0)
  {
   untreated++;
  }
  else if (a == -1 && hired > 0)
  {
   hired--;
  }
  else
  {
   hired += a;
  }
 }

 cout << untreated << endl;

 return 0;
}