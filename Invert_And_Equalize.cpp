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
  int count1=0,count0=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='1')
    {
      if(s[i+1]=='0' || (i+1)==n) count1++;
    }
  }
  for (int j=0;j<n;j++) {
  if(s[j]=='0')
  {
    if(s[j+1]=='1'||(j+1)==n)
    {
      count0++;
    }
  }
  }
  cout<<(min(count0,count1))<<el;
}
return 0;
}