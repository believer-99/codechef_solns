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
  int x,y;
  cin>>x>>y;
  ll add=x;
  for (int i=0;i<y;i++) {
  if(add<1000)add+=1000;
  else add*=2;
  }
  cout<<add<<el;
}
return 0;
}