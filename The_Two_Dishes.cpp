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
  int n,s;
  cin>>n>>s;
  if(n>s)
  {
    cout<<s<<el;
  }
  else{
    for (int i=0;i<=n;i++) {
    if((n+i)==s)
    {
      cout<<(n-i)<<el;
      break;
    }
    }
  }
}
return 0;
}