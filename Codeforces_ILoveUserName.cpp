#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 ulli a;
 cin >> a;

 vector<ulli> aList;

 ulli amazing = 0;

 while (a--)
 {
  ulli b;
  cin >> b;

  aList.push_back(b);
 }

 ulli maxi = aList[0];
 ulli mini = aList[0];

 for (ulli i = 1; i < aList.size(); i++)
 {
  if (aList[i] > maxi)
  {
   amazing++;
   maxi = aList[i];
  }
  else if (aList[i] < mini)
  {
   amazing++;
   mini = aList[i];
  }
 }

 cout << amazing << endl;
 return 0;
}