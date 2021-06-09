#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

struct student
{
 int sub, posi;
};

int main()
{
 int n;
 cin >> n;

 vector<student> progList;
 vector<student> mathList;
 vector<student> pedList;

 int posi = 0;

 while (n--)
 {
  int x;
  cin >> x;

  if (x == 1)
  {
   posi++;
   progList.push_back({x, posi});
  }
  else if (x == 2)
  {
   posi++;
   mathList.push_back({x, posi});
  }
  else if (x == 3)
  {
   posi++;
   pedList.push_back({x, posi});
  }
 }

 int mini = min(progList.size(), mathList.size());
 int pedSize = pedList.size();
 mini = min(mini, pedSize);
 cout << mini << endl;

 for (int i = 0; i < mini; i++)
 {
  cout << progList[i].posi << " " << mathList[i].posi << " " << pedList[i].posi;
  cout << endl;
 }

 return 0;
}