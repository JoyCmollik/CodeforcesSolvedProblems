#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

bool isGettingSimpleValue(vector<long long> nmbrList)
{
 bool isPosbl = true;

 if (nmbrList.size() == 1)
  return true;

 for (long long i = 1; i < nmbrList.size(); i++)
 {
  if ((nmbrList[i] - nmbrList[i - 1]) > 1)
  {
   isPosbl = false;
   break;
  }
 }

 return isPosbl;
}

int main()
{
 long long tCase;
 cin >> tCase;

 while (tCase--)
 {
  long long a;
  cin >> a;

  vector<long long> aList;

  for (long long i = 0; i < a; i++)
  {
   long long temp;
   cin >> temp;

   aList.push_back(temp);
  }

  sort(aList.begin(), aList.end());

  bool ansr = isGettingSimpleValue(aList);

  if (ansr)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }

 return 0;
}