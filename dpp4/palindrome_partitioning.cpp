#include<bits/stdc++.h>
using namespace std;
bool checkpal(string s,int i,int j)
{
  
  while(i<j)
  {
    if(s[i]!=s[j])
    return false;
    i++;
    j--;
  }
  return true;
}
int minpart(string s,int i,int j)
{
  if(i>=j||checkpal(s,i,j))
  return 0;
  int ans=INT_MAX,count ;
  for(int k=i;k<j;k++)
  {
    count =minpart(s,i,k)+minpart(s,k+1,j)+1;
    ans=min(count,ans);
  }
  return ans;

}
int main()
{
  int n,i;
  string s;
  cin>>s;
  n=s.size();
  int ans=minpart(s,0,n-1);
  cout<<ans;
  return 0;
}
