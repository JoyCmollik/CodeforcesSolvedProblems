#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int e;
 cin >> e;

 while (e--)
 {
  ulli n;
  cin >> n;

  char word[n - 1];

  ulli nOfm = 0, nOft = 0;

  for (int i = 0; i < n; i++)
  {
   cin >> word[i];

   if (word[i] == 'M')
   {
    nOfm++;
   }
   else
   {
    nOft++;
   }
  }

  bool isAfirmative = true;

  if (n == 3 && (word[0] == 'T' && word[1] == 'M' && word[2] == 'T'))
  {
   isAfirmative = true;
  }
  else if (n > 3 && (n / 3) == nOfm && (n / 3) * 2 == nOft)
  {
   for (int i = 0; i < n; i += 3)
   {
    if (word[i] == 'T' && word[i + 1] == 'T' && word[i + 2] == 'T')
    {
     isAfirmative = false;
     break;
    }
   }
  }
  else
  {
   isAfirmative = false;
  }

  if (isAfirmative)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }

 return 0;
}