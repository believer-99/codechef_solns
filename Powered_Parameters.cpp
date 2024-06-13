#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n;
  cin>>n;
  ll a[n];
  for (int i=0;i<n;i++) {
  cin>>a[n];
  }
  ll dp[n][n]={0};
  for (int i=0;i<n;i++) {
  for (int j=0;j<n;j++) {
  dp[i][j]=pow(a[i],j+1);
  }
  }
  int count=0;
  for (int i=0;i<n;i++) {
  for (int j=0;j<n;j++) {
  if(dp[i][j]<=a[j])count++;
  }
  }
  cout<<count<<el;
}
return 0;
}