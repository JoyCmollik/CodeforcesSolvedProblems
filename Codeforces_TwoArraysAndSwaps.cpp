#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

vector<int> getArray(int size)
{
 vector<int> array;

 while (size--)
 {
  int x;
  cin >> x;

  array.push_back(x);
 }

 sort(array.begin(), array.end());

 return array;
}

void printMaxi(vector<int> array)
{
 int math = 0;
 for (auto i : array)
  math += i;
 cout << math << endl;
}

void getMaxiSum(int nOfitem, int nOfmove)
{
 vector<int> ar1 = getArray(nOfitem);
 vector<int> ar2 = getArray(nOfitem);

 int posi1 = 0, posi2 = nOfitem - 1;

 while (nOfmove--)
 {
  int maxi = max(ar1[posi1], ar2[posi2]);
  ar1[posi1] = maxi;
  posi1++;
  posi2--;
 }

 printMaxi(ar1);
}

int main()
{
 int tCase;
 cin >> tCase;

 while (tCase--)
 {
  int n, k;
  cin >> n >> k;

  getMaxiSum(n, k);
 }

 return 0;
}