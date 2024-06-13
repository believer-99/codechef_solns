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
  ll count=0;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  sort(a,a+n);
  for (int j=0;j<n;j++) {
  count+=(abs(j-a[j]));
  }
  cout<<count<<el;
}
return 0;
}