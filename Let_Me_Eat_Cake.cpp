#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long
#define pb push_back

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int a,b;
  cin>>a>>b;
  int c = 0;
  while(a!=b)
  {
    if(a>b)
    {
      c+=ceil((double)a/2.0);
      a-=ceil((double)a/2.0);
    }
    else
    {
      c+=ceil((double)b/2.0);
      b-=ceil((double)b/2.0);
    }
  }
  cout<<c<<el;
}
return 0;
}