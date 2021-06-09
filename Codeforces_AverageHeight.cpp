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

  vector<int> memList;
  vector<int> memxList;

  for (int i = 0; i < n; i++)
  {
   int q;
   cin >> q;

   if (q % 2 != 0)
    memList.push_back(q);
   else
    memxList.push_back(q);
  }

  for (auto x : memList)
   cout << x << " ";
  for (auto s : memxList)
   cout << s << " ";

  cout << endl;
 }

 return 0;
}