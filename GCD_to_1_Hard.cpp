#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define ll long long int
#define lld long long double
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) ((ll)(x).size())
#define eb emplace_back
#define mod 1000000007

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
  int n,m;
  cin>>n>>m;
  if(n<=m)
  {
    for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
    if(i==j || (n<m && i==(n-1) && j>=(n-1)))cout<<"3 ";
    else cout<<"2 ";
    }
    cout<<el;
    }
  }
  else
  {
    for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
    if(i%m==j)cout<<"3 ";
    else cout<<"2 ";
    }
    cout<<el;
    }
  }
}
return 0;
}