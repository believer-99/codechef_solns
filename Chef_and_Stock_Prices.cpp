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
  int s,a,b,c;
  cin>>s>>a>>b>>c;
  double change = 0.01 *c;
  if((((double)s+change)>=a)&& (((double)s+change)<=b))
  {
    cout<<"Yes"<<el;
  }
  else{
    cout<<"No"<<el;
  }
}
return 0;
}