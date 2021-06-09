#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

void getStringChecked(string task)
{
 bool suspicious = false;

 for (int i = 0; i < task.size(); i++)
 {
  if (task[i] != task[i + 1])
  {
   for (int j = i + 2; j < task.size(); j++)
   {
    if (task[i] == task[j])
    {
     suspicious = true;
     break;
    }
   }
  }
  if (suspicious)
   break;
 }

 if (!suspicious)
  cout << "YES";
 else
  cout << "NO";

 cout << endl;
}

void getString(int n)
{
 string task;
 cin >> task;

 if (task.size() == n)
  getStringChecked(task);
}

int main()
{
 int tCase;
 cin >> tCase;

 while (tCase--)
 {
  int n;
  cin >> n;

  getString(n);
 }
 return 0;
}