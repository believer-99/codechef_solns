#include<bits/stdc++.h>
#include<cmath>
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
  ll n,k;
  cin>>n>>k;
  ll a[n];
  int min;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  a[i]=a[i]%k;
  }
  sort(a,a+n);
  min=a[n-1]-a[0];
  int j=0;
  while(a[j]<(int)floor((double)k/2.0))
  {
    a[j]+=k;
    ++j;
  }
  sort(a,a+n);
  int min1=a[n-1]-a[0];
  int ans=(min<min1)?min:min1;
  cout<<ans<<endl;
}
return 0;
}
