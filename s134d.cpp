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
  ll p=n%9;
  ll sum=(45*(n/9))+((p*(p+1))/2);
  cout<<sum<<el;
}
return 0;
}