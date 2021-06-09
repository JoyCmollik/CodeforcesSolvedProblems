#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  ulli n;
  cin >> n;

  ulli half = n / 2;

  if (half % 2 == 0)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;

  if (half % 2 == 0)
  {
   vector<ulli> aNmbr;
   vector<ulli> bNmbr;
   ulli a = 2, b = 1;
   ulli suma = 0;
   ulli sumb = 0;
   for (ulli i = 1; i <= half; i++)
   {
    aNmbr.push_back(a);
    suma += a;
    a += 2;

    if (i == half)
    {
     b = suma - sumb;
     bNmbr.push_back(b);
     break;
    }
    bNmbr.push_back(b);
    sumb += b;
    b += 2;
   }

   for (ulli x = 0; x < aNmbr.size(); x++)
    cout << aNmbr[x] << " ";
   for (ulli m = 0; m < bNmbr.size(); m++)
    cout << bNmbr[m] << " ";
   cout << endl;
  }
 }

 return 0;
}