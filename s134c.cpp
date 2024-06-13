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
  cin.ignore();
  string s;
  cin>>s;
  int count=1;
  int consec=1;
  for (int i=1;i<n;i++) {
  if(s[i]==s[i-1])
  {
    consec++;
  }
  else consec=1;
  if(consec%2==0)
  {
    continue;
  }
  else count++;
  }
  cout<<count<<el;
}
return 0;
}