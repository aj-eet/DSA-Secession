#include<bits/stdc++.h>
using namespace std;
int solve(int wt[],int val[],int w,int n,vector<vector<int>>&dp)
{
    
    if(w==0||n==0)
    dp[w][n]= 0;
    int ans;
    if(dp[w][n]!=-1)
    return dp[w][n];
    if(wt[n]<=w)
    {
        //current object is less then remining capacity of knapsack 
        ans=max(val[n]+solve(wt,val,w-wt[n-1],n-1,dp),solve(wt,val,w,n-1,dp));
        dp[w][n]=ans;
    }
    else{
        //when current obj weight is greater then remaining capacity of knapsack
        ans=solve(wt,val,w,n-1,dp);
         dp[w][n]=ans;
    }
    return dp[w][n];
}
int main()
{
    int n,w;
    cin>>n>>w;
    int wt[n],val[n];
    int i;
    for(i=0;i<n;i++)
    cin>>wt[i];
    for(i=0;i<n;i++)
    cin>>val[i];
     vector<vector<int>>dp(w+1,vector<int>(n+1,-1));
     int ans=solve(wt,val,w,n-1,dp);
    cout<<ans;
    return 0;
}
