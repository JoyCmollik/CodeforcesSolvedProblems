#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

void getSameSocks(ulli nOfSocks)
{
 cout << nOfSocks / 2 << endl;
}

void getDiffSocks(ulli redSock, ulli blueSock)
{
 if (redSock >= blueSock)
 {
  cout << blueSock << " ";
  getSameSocks(redSock - blueSock);
 }
 else if (blueSock > redSock)
 {
  cout << redSock << " ";
  getSameSocks(blueSock - redSock);
 }
}

int main()
{
 ulli a, b;
 cin >> a >> b;

 getDiffSocks(a, b);

 return 0;
}