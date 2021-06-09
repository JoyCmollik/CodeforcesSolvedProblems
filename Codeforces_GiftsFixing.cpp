#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

vector<ulli> getArray(ulli limit)
{
 vector<ulli> array;

 while (limit--)
 {
  ulli x;
  cin >> x;

  array.push_back(x);
 }

 return array;
}

ulli getMini(vector<ulli> a)
{
 ulli mini = 100000000000;

 for (auto x : a)
 {
  if (x < mini)
   mini = x;
 }
 return mini;
}

ulli getMoves(vector<ulli> candy, vector<ulli> orange)
{
 ulli miniCandy = getMini(candy);
 ulli miniOrange = getMini(orange);

 ulli moves = 0;

 for (ulli i = 0; i < candy.size(); i++)
 {
  ulli candyMove = candy[i] - miniCandy;
  ulli orangeMove = orange[i] - miniOrange;

  moves += max(candyMove, orangeMove);
 }

 return moves;
}

int main()
{
 ulli tCase;
 cin >> tCase;

 while (tCase--)
 {
  ulli n;
  cin >> n;

  vector<ulli> candyList = getArray(n);
  vector<ulli> orangeList = getArray(n);

  ulli move = getMoves(candyList, orangeList);

  cout << move << endl;
 }

 return 0;
}