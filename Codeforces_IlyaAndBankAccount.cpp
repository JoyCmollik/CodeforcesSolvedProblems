#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

int main()
{
  long long n;
  cin >> n;

  if (n >= 0)
  {
    cout << n << endl;
  }
  else
  {
    if (n > -10)
    {
      cout << "0" << endl;
    }
    else if (n > -100)
    {
      cout << max(n % 10, n / 10) << endl;
    }
    else
    {
      long long divn = ((n / 100) * 10) + (n % 10);
      cout << max(n / 10, divn) << endl;
    }
  }

  return 0;
}