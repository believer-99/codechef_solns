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
  int sum=0;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  }
  sort(a,a+n);
  for (int j=0;j<n;j++) {
    if(((7-a[j])>=a[j])&& k>0)
    {
      sum+=(7-a[j]);
      k--;
    }
    else{
      sum+=a[j];
    }
  }
  cout<<sum<<endl;
}
return 0;
}