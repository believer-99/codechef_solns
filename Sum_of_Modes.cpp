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
  for (int i=0;i<n;i++) {
    if(s[i]=='0')s[i]='-1';
  }
  ll ans= (n*(n+1))/2;
  int sum=0,count=0;
  unordered_map<int,int> preSum;
  preSum[0]=1;
  for (int j=0;j<n;j++) {
    sum+=s[j];
    if(preSum.find(sum)!=preSum.end())count+=preSum[sum];
    preSum[sum]++;
  }
  ans+=count;
  cout<<ans<<el;
}
return 0;
}