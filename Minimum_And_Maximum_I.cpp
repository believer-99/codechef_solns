#include<bits/stdc++.h>
using namespace std;

#define el endl

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
  vector<long long>sum;
  sum[0]=0;
  for (long long i=1;i<=1e9;i++) {
  sum[i]+=(sum[i-1]+i);
  }
while(t--)
{
  long long n;
  cin>>n;
  cout<<sum[n]<<el;
}
return 0;
}