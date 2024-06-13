#include<bits/stdc++.h>
using namespace std;

#define el endl

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
cin.ignore();
while(t--)
{
  int n,k,x;
  cin>>n>>k>>x;
  int sum[k];
  sum[0]=0;
  sum[1]=1;
  for (int i=2;i<=k;i++) {
    sum[i]=(sum[i-1]+sum[i-2])+1; 
  }
  if(x<sum[k])
  {
    cout<<"No"<<el;
  }
  else
  {
    cout<<"Yes"<<el;
  }
}
return 0;
}