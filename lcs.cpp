#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int n,int m)
{
  if(n==0||m==0)
  return 0;
  else if(s1[n-1]==s2[m-1])
  return 1+lcs(s1,s2,n-1,m-1);
  else 
  return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
}
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int n,m;
  n=s1.size();
  m=s2.size();
  int ans=lcs(s1,s2,n,m);
  cout<<ans<<endl;
  return 0;
}