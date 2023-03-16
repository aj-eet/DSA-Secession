#include<bits/stdc++.h>
using namespace std;
int solve(int wt[],int val[],int w,int n)
{
    if(w==0||n<0)
    return 0;
    int ans;
    if(wt[n]<w)
    {
        //current object is less then remining capacity of knapsack 
        ans=max(solve(wt,val,w-wt[n],n-1)+val[n],solve(wt,val,w,n-1));

    }
    else{
        //when current obj weight is greater then remaining capacity of knapsack
        ans=solve(wt,val,w,n-1);
    }
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
    cout<<solve(wt,val,w,n-1);
    return 0;
}
