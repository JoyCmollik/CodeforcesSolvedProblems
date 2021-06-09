
#include <bits/stdc++.h>

using namespace std;

int main()
{
 long long nRow, rowSize;
 cin >> nRow >> rowSize;

 vector<vector<char>> vec(nRow, vector<char>(rowSize, '.'));

 long long allHashTracker = 0, fHashTracker = 3, lHashTracker = 1;

 for (int i = 0; i < nRow; i++)
 {
  if (i == allHashTracker)
  {

   for (int j = 0; j < rowSize; j++)
   {

    vec[allHashTracker][j] = '#';
    if (j == rowSize - 1)
     allHashTracker += 2;
   }
  }

  if (i == fHashTracker)
  {
   vec[fHashTracker][0] = '#';
   fHashTracker += 4;
  }

  if (i == lHashTracker)
  {
   vec[lHashTracker][rowSize - 1] = '#';
   lHashTracker += 4;
  }
 }

 for (int i = 0; i < vec.size(); i++)
 {
  for (int j = 0; j < vec[i].size(); j++)
  {
   cout << vec[i][j];
  }
  cout << endl;
 }

 return 0;
}