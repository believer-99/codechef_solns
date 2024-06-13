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
  int n,x;
  cin>>n>>x;
  int s[n],r[n];
  for (int i=0;i<n;i++) {
  cin>>s[i]>>r[i];
  }
  int max_r=0;
  for (int i=0;i<n;i++) {
  if(r[i]>=max_r && s[i]<=x)
  {
    max_r=r[i];
  }
  }
  cout<<max_r<<el;
}
return 0;
}