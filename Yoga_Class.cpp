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
  int n,x,y;
  cin>>n>>x>>y;
  int money=0;
  if(y>=2*x)
  {
    money=(n/2)*y;
    if(n%2==1)money+=x;
  }
  else{
    money=x*n;
  }
  cout<<money<<el;
}
return 0;
}