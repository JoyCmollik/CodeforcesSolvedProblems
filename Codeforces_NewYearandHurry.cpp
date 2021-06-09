#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

vector<long long> getProbVec(long long n)
{
 vector<long long> retVect;

 retVect.push_back(5);

 for (long long i = 1; i < n; i++)
 {
  long long a = (i + 1) * 5;
  long long b = retVect[i - 1];

  retVect.push_back(a + b);
 }

 return retVect;
}

long long getNmbrofProblems(vector<long long> vect, long long travMins)
{
 long long posi;

 if (travMins + 4 >= 240)
  return 0;

 for (long long i = 0; i < vect.size(); i++)
 {
  if ((vect[i] + travMins) <= 240)
   posi = i + 1;
  else
   break;
 }

 return posi;
}

int main()
{
 long long n, k;

 cin >> n >> k;

 vector<long long> probVec = getProbVec(n);

 cout << getNmbrofProblems(probVec, k) << endl;

 return 0;
}