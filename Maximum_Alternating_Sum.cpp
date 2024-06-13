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
  int a[n];
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  sort(a,a+n,greater<int>());
  ll sum=0;
  for (int j=0;j<n;j++) {
    if(j<(int)(ceil(n/2.0))) sum+=a[j];
    else sum-=a[j];
  }
  cout<<sum<<el;
}
return 0;
}