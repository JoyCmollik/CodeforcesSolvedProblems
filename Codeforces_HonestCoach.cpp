#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 int tCase;
 cin >> tCase;

 while (tCase--)
 {
  int n;
  cin >> n;

  vector<int> athList;
  while (n--)
  {
   int x;
   cin >> x;

   athList.push_back(x);
  }

  sort(athList.begin(), athList.end());

  int mini = 10000;

  for (int i = 1; i < athList.size(); i++)
  {
   if (athList[i] - athList[i - 1] < mini)
    mini = athList[i] - athList[i - 1];

   if (mini == 0)
    break;
  }

  cout << mini << endl;
 }

 return 0;
}