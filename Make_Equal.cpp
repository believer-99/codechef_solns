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
  cin.ignore();
  int a[n],a1[n];
  for(int i=0;i<n;i++) {
  cin>>a[i];
  a1[i]=a[i];
  }
  sort(a,a+n);
  if(a1[0]==a[0] && a1[n-1]==a[0])
  {
    cout<<"YES"<<el;
  }
  else{
    cout<<"NO"<<el;
  }
}
return 0;
}