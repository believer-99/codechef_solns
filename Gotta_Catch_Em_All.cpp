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
  int n,x,y;
  cin>>n>>x>>y;
  int a[n];
  int cost=0;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  for (int j=0;j<n;j++) {
  if(x*a[j]<=y)
  {
    cost+=(x*a[j]);
  }
  else{
    cost+=y;
  }
  }
  cout<<cost<<endl;
}
return 0;
}