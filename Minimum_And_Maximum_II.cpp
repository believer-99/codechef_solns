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
  ll n;
  cin>>n;
  ll sum=(n*(n+1))/2;
  sum+=(n-1);
  cout<<sum<<el;
}
return 0;
}