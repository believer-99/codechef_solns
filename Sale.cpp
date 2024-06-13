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
  int n;
  cin>>n;
  cin.ignore();
  int a[n]={0};
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  int max_sum=accumulate(a,a+n,0);
  int sum=0;
  for (int j=0;j<n;j++) {
  if((sum + 2*a[j])>=max_sum)
  {
    max_sum=(sum+2*a[j]);
  }
    sum+=a[j];
  }
}
return 0;
}