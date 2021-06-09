#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
 vector<ulli> aList;

 int limit = 4;

 while (limit--)
 {
  ulli temp;
  cin >> temp;

  aList.push_back(temp);
 }

 sort(aList.begin(), aList.end());

 cout << (aList[3] - aList[0]) << " " << (aList[3] - aList[2]) << " " << (aList[3] - aList[1]) << endl;

 return 0;
}