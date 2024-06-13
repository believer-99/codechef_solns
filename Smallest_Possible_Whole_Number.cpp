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
  int n,k;
  cin>>n>>k;
  if(n>k && k!=0)
  {
    cout<<(n%k)<<el;
  }
  else if(n==k)
  {
    cout<<"0"<<el;
  }
  else
  {
    cout<<n<<el;
  }
}
return 0;
}