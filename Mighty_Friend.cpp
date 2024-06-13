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
  int n,k;
  cin>>n>>k;
  int a[n];
  vector<int>motu;
  vector<int>tomu;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  if(i%2==0)
  {
    motu.push_back(a[i]);
  }
  else
  {
    tomu.push_back(a[i]);
  }
  }
  sort(motu.begin(),motu.end(),greater<int>());
  sort(tomu.begin(),tomu.end(),greater<int>());
  int l=*motu.begin();
  int m=*tomu.end()-1;
  while(k>0)
  {
    if(motu[l]>tomu[m])
    {
      swap(motu[l],tomu[m]);
      l++;
      m--;
      k--;
    }
    else{
      m--;
    }
  }
  int sum0=accumulate(motu.begin(),motu.end(),0);
  int sum1=accumulate(tomu.begin(),tomu.end(),0);
  if(sum1>sum0)
  {
    cout<<"YES"<<el;
  }
  else cout<<"NO"<<el;
}
return 0;
}