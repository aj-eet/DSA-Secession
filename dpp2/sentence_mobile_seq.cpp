//Convert a sentence into its equivalent mobile numeric keypad sequence

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int n,i;
  cin>>s;
  n=s.size();
  string ans="";
  string temp[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
  for(i=0;i<n;i++)
  {
    if(s[i]==' ')
    ans+="0";
    else
    ans+=(temp[s[i]-'A']);


  }
cout<<ans;
  
  return 0;
}