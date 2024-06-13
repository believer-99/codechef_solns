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
  int n,m;
  cin>>n>>m;
  int count=0;
  while(n>=1)
  {
    n=n/2;
    count+=n;
  }
  if(count>=m)
{
  cout<<"YES"<<el;
}
else{
  cout<<"NO"<<el;
}
}
return 0;
}