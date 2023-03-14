#include <bits/stdc++.h>
using namespace std;
int mcm(int arr[], int i, int j)
{
  if (i == j)
    return 0;
  int min_cost = INT_MAX;
  for (int k = i; k < j; k++)
  {
    int  temp = mcm(arr, i, k) + mcm(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
    min_cost = min(min_cost, temp);
  }
  return min_cost;
}

int main()
{
  int n, i, j;
  cin >> n;
 
  int arr[n];
  for (i = 0; i < n; i++)
    cin >> arr[i];
   
    

  int ans = mcm(arr, 1, n-1);
 
  cout << ans;

  return 0;
}
