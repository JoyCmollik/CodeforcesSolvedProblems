#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 vector<int> aList;

 for (int i = 0; i < 3; i++)
 {
  int a;
  cin >> a;

  aList.push_back(a);
 }

 sort(aList.begin(), aList.end());

 int mini = 1000;

 for (int i = aList[0]; i <= aList[2]; i++)
 {
  int dist = 0;

  if (i <= aList[1])
   dist = (i - aList[0]) + (aList[1] - i) + (aList[2] - i);
  else if (i <= aList[2])
   dist = (i - aList[0]) + (i - aList[1]) + (aList[2] - i);

  if (dist < mini)
   mini = dist;
 }

 cout << mini << endl;

 return 0;
}