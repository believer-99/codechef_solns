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
  int n;
  cin>>n;
  string s;
  cin>>s;
  string s1="";
  int count=0;
  if(s[0]==1)
  {
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
        s1[i]=1;
      }
      else{
        s1[i]=0;
      }
    }
    for (int j=0;j<n;j++) {
  if(s[j]!=s1[j])count++;
  }
  }
  else if(s[0]==0)
  {
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
        s1[i]=0;
      }
      else{
        s1[i]=1;
      }
    }
    for(int j=0;j<n;j++) {
  if(s[j]!=s1[j])count++;
  }
  }
  cout<<count<<el;
}
return 0;
}