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
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  sort(a.begin(),a.end());
  string ans="YES";
  for (int j=0;j<n;j++) {
  if(a[j]>(j+1))
  {
    ans="NO";
    break;
  }
  }
  cout<<ans<<el;
}
return 0;
}