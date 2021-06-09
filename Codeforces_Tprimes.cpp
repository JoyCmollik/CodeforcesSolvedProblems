#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

static const unsigned long long SIZE = 10000001;

vector<bool> getPrimeArray()
{
  vector<bool> primeSet(SIZE, true);

  primeSet[0] = false;
  primeSet[1] = false;

  for (ulli i = 2; i <= sqrt(SIZE); i++)
  {
    if (primeSet[i])
    {
      for (ulli j = i * 2; j <= SIZE; j += i)
      {
        primeSet[j] = false;
      }
    }
  }

  return primeSet;
}

int main()
{
  vector<bool> primeArray = getPrimeArray();

  unsigned long long n;
  cin >> n;

  while (n--)
  {
    unsigned long long temp;
    cin >> temp;

    unsigned long long sqTemp = sqrt(temp);

    if (sqTemp * sqTemp == temp && primeArray[sqTemp])
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}