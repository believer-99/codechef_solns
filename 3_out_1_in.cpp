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
  int n,q;
  cin>>n>>q;
  vector<int> a;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int k[q];
  for (int j=0;j<n;j++) {
  cin>>k[j];
  }
  int que=0;
  while(que<q)
  {
    int limit=k[que];
    if(limit==1) cout<<a[0]<<" ";
    else if(limit==2) cout<<(a[0]+a[1])<<" ";
    else{
      vector<int>copy=a;
    sort(copy.begin(),copy.begin()+limit);
    cout<<(*copy.rbegin()+*(copy.rbegin()-1)-*copy.begin())<<" ";
    }
  }
  cout<<el;
  que++;
}
return 0;
}