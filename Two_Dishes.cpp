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
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  if(b>=n && (a+c)>=n)
  {
    cout<<"YES"<<el;
  }
  else{
    cout<<"NO"<<el;
  }
}
return 0;
}