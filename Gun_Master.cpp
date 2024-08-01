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
  int n,d;
  cin>>n>>d;
  vector<int> a(n);
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int switches=0;bool closed=true;
  for (int i=0;i<n;i++) {
  if(a[i]>d && closed)
  {
    switches++;
    closed=false;
  }
  if(a[i]<=d && !closed)
  {
    switches++;
    closed=true;
  }
  }
  cout<<switches<<el;
}
return 0;
}