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
  int n,k;
  cin>>n>>k;
  int req=(k*(k+1)/2) + (k-1);
  if(n>=req)cout<<"YES"<<el;
  else cout<<"NO"<<el;
}
return 0;
}