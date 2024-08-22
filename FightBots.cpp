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
  int n,x,y;
  cin>>n>>x>>y;
  string s;
  cin>>s;
  string ans = "No";
  //if((abs(x)+abs(y))>n)
  //{
  //  cout<<"No"<<el;
  //  continue;
  //}
  vector<pair<int,int>> a(n+1),b(n+1);
  a[0]={0,0};
  b[0]={x,y};
  for (int i=1;i<=n;i++) {
  if(s[i-1]=='R')a[i]={a[i-1].first+1,a[i-1].second};
  else if(s[i-1]=='L')a[i]={a[i-1].first-1,a[i-1].second};
  else if(s[i-1]=='D')a[i]={a[i-1].first,a[i-1].second-1};
  else if(s[i-1]=='U')a[i]={a[i-1].first,a[i-1].second+1};

  if(abs((a[i].first)-(b[i-1].first))>=(abs((a[i].second)-(b[i-1].second))))
  {
    if(((a[i].first)-(b[i-1].first))>0)
    {
      b[i]={(b[i-1].first+1),(b[i-1].second)};
    }
    else b[i]={(b[i-1].first-1),(b[i-1].second)};
  }
  else
  {
    if(a[i].second-b[i-1].second>0)b[i]={b[i-1].first,b[i-1].second+1};
    else b[i]={b[i-1].first,b[i-1].second-1};
  }

  if(a[i].first==b[i].first && a[i].second==b[i].second)
  {
    ans="Yes";
    break;
  }
  }
  cout<<ans<<el;
}
return 0;
}