#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long
#define pb push_back

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n;
  cin>>n;
  vector<ll> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  if(n==1)
  {
    cout<<"YES"<<el;
    continue;
  }
  bool flag=false;
  for (int i=1;i<n;i++) {
  if(a[i]==a[i-1] || (a[i-1]==0 || a[i]==0))
  {
    continue;
  }
  else 
  {
    cout<<"NO"<<el;
    flag=true;
    break;
  }
  }
  if(!flag)cout<<"YES"<<el;
}
return 0;
}