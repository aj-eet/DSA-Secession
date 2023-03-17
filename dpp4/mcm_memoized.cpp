#include <bits/stdc++.h>
using namespace std;

int mcm(int arr[],int i,int j,vector<vector<int>>&dp)
{
    
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==j)
    dp[i][j]=0;
    int ans=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp=mcm(arr,i,k,dp)+mcm(arr,k+1,j,dp)+arr[i-1]*arr[k]*arr[j];
        ans=min(temp,ans);
        dp[i][j]=ans;
    }
    return dp[i][j];
}

int main()
{
  int n, i, j;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
   vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
  int ans = mcm(arr, 1, n-1,dp);
 
  cout << ans;

  return 0;
}

