#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

void showAnsr(vector<long long> ansList)
{
 cout << ansList.size() << endl;

 for (long long i = 0; i < ansList.size(); i++)
 {
  cout << ansList[i] << " ";
 }
 cout << endl;
}

void printNmbr(string nmbr, long long nmbrSize)
{
 vector<long long> nmbrList;
 long long posi = 1;
 for (long long i = nmbrSize - 1; i >= 0; i--)
 {
  if (nmbr[i] == '0')
  {
   posi *= 10;
  }
  else
  {
   long long curNmbr = nmbr[i] - '0';
   long long temp = posi * curNmbr;
   nmbrList.push_back(temp);
   posi *= 10;
  }
 }

 showAnsr(nmbrList);
}

int main()
{
 long long tCase;
 cin >> tCase;

 while (tCase--)
 {
  string nmbr;
  cin >> nmbr;

  long long nmbrSize = nmbr.length();

  printNmbr(nmbr, nmbrSize);
 }
 return 0;
}