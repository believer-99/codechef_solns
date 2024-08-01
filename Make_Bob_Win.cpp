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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count = 0;
  if(s[0]=='0')count++;
  if(s[n-1]=='0' && n>1)count++;
  cout<<count<<el;
}
return 0;
}