#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int n, int m, vector<vector<int>> &dp)
{
  if (dp[n][m] != -1)
    return dp[n][m];
  else
  {
    if (n == 0 || m == 0)
      dp[n][m] = 0;
    else
    {
      if (a[n - 1] == b[m - 1])
        dp[n][m] = 1 + lcs(a, b, n - 1, m - 1, dp);
      else
      {
        dp[n][m] = max(lcs(a, b, n - 1, m, dp), lcs(a, b, n, m - 1, dp));
      }

     
    } 
    return dp[n][m];
  }
}
int main()
{
  string a, b;
  cin >> a>>b;
int n,m;
  n = a.size();
  m = b.size();

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
  
  int ans=lcs(a,b,n,m,dp);
 cout<<ans;
  return 0;
}
