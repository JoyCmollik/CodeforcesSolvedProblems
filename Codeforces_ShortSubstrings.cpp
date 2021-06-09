#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

void getStringa(string bString)
{

 cout << bString[0];

 ulli leng = bString.length();

 for (ulli i = 2; i < leng - 1; i += 2)
 {
  cout << bString[i];
 }

 cout << bString[leng - 1];

 cout << endl;
}

int main()
{
 ulli t;
 cin >> t;

 while (t--)
 {
  string b;
  cin >> b;

  getStringa(b);
 }
 return 0;
}