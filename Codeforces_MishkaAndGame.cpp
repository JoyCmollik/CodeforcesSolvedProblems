#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int n;
 cin >> n;

 int mWins = 0, cWins = 0;

 while (n--)
 {
  int m, c;
  cin >> m >> c;

  if (m == c)
   continue;
  else if (m > c)
   mWins++;
  else
   cWins++;
 }

 if (mWins == cWins)
  cout << "Friendship is magic!^^" << endl;
 else if (mWins > cWins)
  cout << "Mishka" << endl;
 else
  cout << "Chris" << endl;

 return 0;
}