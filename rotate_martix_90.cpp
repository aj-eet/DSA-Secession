#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i, j;
  int r, c;
  cin >> r;
  vector<vector<int>> v;
  for (i = 0; i < r; i++)
  {
    vector<int> a;
    
    for (int j = 0; j < r; j++)
    {
      int x;
      cin >> x;
      a.push_back(x);
    }
    v.push_back(a);
  }
  

for(i=0;i<r;i++)
{
  for(j=i+1;j<r;j++)
  {
    swap(v[i][j],v[j][i]);
  }
}
reverse(v.begin(),v.end());
// for(i=0;i<r;i++)
// {
//   int l=0,h=r-1;
//   while(l<h)
//   {
//     swap(v[l][i],v[h][i]);
//     l++;
//     h--;
//   }
// }
for(i=0;i<r;i++)
{
  for(j=0;j<r;j++)
  {
    cout<<v[i][j]<<" ";
  }
  cout<<endl;
}
  return 0;
}