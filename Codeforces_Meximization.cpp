#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 long long tesCase;
 cin >> tesCase;

 while (tesCase--)
 {
  long long n;
  cin >> n;

  vector<long long> vect;

  for (long long i = 0; i < n; i++)
  {
   long long temp;
   cin >> temp;

   vect.push_back(temp);
  }

  sort(vect.begin(), vect.end());

  vector<long long> exra;

  for (long long x = 0; x < vect.size(); x++)
  {
   if (vect[x] == vect[x - 1])
    exra.push_back(vect[x]);
   else
    cout << vect[x] << " ";
  }

  for (auto c : exra)
   cout << c << " ";
  cout << endl;
 }

 return 0;
}