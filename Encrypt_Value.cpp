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
  ll m=pow(10,9)+7;
  ll pro=1;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  a[i]=a[i]%m;
  }
  sort(a,a+n);
  for (int j=0;j<n;j++) {
  if(a[j]==1)a[j+1]+=1;
  else{
    pro*=a[j];
  }
  }
  cout<<(pro%m)<<el;
}
return 0;
}