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
  int a,b,c,d,k;
  cin>>a>>b>>c>>d>>k;
  int man_dist=(abs(c-a)+abs(d-b));
  if(man_dist>k)
  {
    cout<<"NO"<<el;
  }
  else if(man_dist==k)
  {
    cout<<"YES"<<el;
  }
  else {
    if((k-man_dist)%2==0)
    {
      cout<<"YES"<<el;
    }
    else{
      cout<<"NO"<<el;
    }
  }
}
return 0;
}