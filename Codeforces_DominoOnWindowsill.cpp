#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

bool getSolve()
{
 long long n, k1, k2, w, b;
 cin >> n >> k1 >> k2 >> w >> b;

 long long totW = k1 + k2;
 long long totB = (n * 2) - totW;

 if (w == 0 && b == 0)
  return 1;

 if ((totW / 2 >= w) && (totB / 2 >= b))
  return 1;
 else
  return 0;
}

int main()
{
 long long tesCase;
 cin >> tesCase;

 while (tesCase--)
 {
  bool ansr = getSolve();

  if (ansr)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }

 return 0;
}