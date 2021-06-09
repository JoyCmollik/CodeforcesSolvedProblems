#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli getPosiX(ulli totRslt)
{
 ulli posiX, sumOfi = 1;
 for (ulli i = 2; i < totRslt; i *= 2)
 {
  sumOfi += i;
  if (totRslt % sumOfi == 0)
  {
   posiX = totRslt / sumOfi;
   break;
  }
 }

 return posiX;
}

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  ulli n;
  cin >> n;

  cout << getPosiX(n) << endl;
 }
 return 0;
}