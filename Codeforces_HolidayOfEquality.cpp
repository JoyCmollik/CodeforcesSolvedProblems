#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli getMiniBurlesToSpend(ulli totCiti)
{
 vector<ulli> citiWelfare;
 ulli maxi = 0;

 while (totCiti--)
 {
  ulli x;
  cin >> x;

  citiWelfare.push_back(x);

  if (x > maxi)
   maxi = x;
 }

 ulli miniWel = 0;
 for (ulli i = 0; i < citiWelfare.size(); i++)
 {
  miniWel += maxi - citiWelfare[i];
 }

 return miniWel;
}

int main()
{
 ulli n;
 cin >> n;

 cout << getMiniBurlesToSpend(n);
 return 0;
}