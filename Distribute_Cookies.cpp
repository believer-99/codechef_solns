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
  int n,m;
  cin>>n>>m;
  int mod=m%n;
  int rem=n-mod;
  if(n>m)
  {
    cout<<n-mod<<el;
    continue;
  }
  cout<<min(mod,(n-mod))<<el;
}
return 0;
}