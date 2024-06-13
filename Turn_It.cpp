#include<bits/stdc++.h>
using namespace std;

#define el endl

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int u,v,a,s;
  cin>>u>>v>>a>>s;
  long int val = (u*u)-(2*a*s);
  if((val)<=(v))
  {
    cout<<"Yes"<<el;
  }
  else{
    cout<<"No"<<el;
  }
}
return 0;
}