#include<bits/stdc++.h>
using namespace std;

#define el endl
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
  int a,b,c,m;
  cin>>a>>b>>c>>m;
  int diff1=abs(a-c);
  int diff2=abs(b-c);
  int diff3=abs(a-b);
  if(diff1<=m || diff2<=m || diff3<=m)
  {
    cout<<"YES"<<el;
  }
  else cout<<"NO"<<el;
}
return 0;
}