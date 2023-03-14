#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr1[n],arr2[n];
  int i;
  for(i=0;i<n;i++)
  cin>>arr1[i];
  for(i=0;i<n;i++)
  cin>>arr2[i];
  vector<int>v;
  for(i=0;i<n;i++)
  {
    v.push_back(arr1[i]);
    v.push_back(arr2[i]);
  }
  n=n+n;
  sort(v.begin(),v.end());
  float ans=((v[n/2]+v[n/2-1]))/2.0;
  cout<<ans;
  return 0;
}