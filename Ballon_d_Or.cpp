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
  int a[n];
  int count=0;
  ll pro=1;
  for (int i=0;i<n;i++) {
  cin>>a[i];
  pro*=a[i];
  if(a[i]==2)
  {
    count++;
  }
  }
  if(count % 8==0 || pro==1)
  {
    cout<<"YES"<<el;
  }
  else{
    cout<<"NO"<<el;
  }

}
return 0;
}