#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;
const int MAXI = 1e6 + 5;

vector<bool> getPrime()
{
 vector<bool> prime(MAXI, true);
 prime[0] = false;
 prime[1] = false;

 for (ulli i = 2; i <= sqrt(MAXI); i++)
 {
  if (prime[i])
  {
   for (ulli x = i * 2; x < MAXI; x += i)
   {
    prime[x] = false;
   }
  }
 }
 return prime;
}

int main()
{
 vector<bool> primeList = getPrime();

 ulli n;
 cin >> n;

 if (n % 2 == 0 && primeList[n / 2] == false)
 {
  cout << n / 2 << " " << n / 2 << endl;
 }
 else if (n % 2 == 0 && primeList[n / 2] == true)
 {
  ulli dive = n / 2;
  ulli divextra = dive;

  while (1)
  {
   if (primeList[dive] == false && primeList[divextra] == false)
   {
    cout << dive << " " << divextra << endl;
    break;
   }
   else
   {
    dive++;
    divextra--;
   }
  }
 }
 else
 {
  ulli dive = n / 2;
  ulli divextra = (n / 2) + 1;

  while (1)
  {
   if (primeList[dive] == false && primeList[divextra] == false)
   {
    cout << dive << " " << divextra << endl;
    break;
   }
   else
   {
    dive--;
    divextra++;
   }
  }
 }
 return 0;
}