#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n=s.size();
  int i;
  for(i=0;i<n/2;i++)
  {
    if(s[i]!=s[n-i-1])
    {
      cout<<"NO"<<endl;
       break;
    }
   
  }
  if(i>=n/2)
  cout<<"Yes"<<endl;

  return 0;
}