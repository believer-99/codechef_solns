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
  string s;
  cin>>s;
  int count=0;
  int ans=0;
  int n=s.length();
  for (int i=0;i<n;i++) {
  if(s[i]=='1')count++;
  }
  if(count==1)
  {
    ans=11;
  }
  else if(count==2)
  {
    if(s=="1100" || s=="0011") ans=21;
    else ans=121;
  }
  else if(count==3)
  {
    ans=231;
  }
  else ans=441;
  cout<<ans<<el;
}
return 0;
}