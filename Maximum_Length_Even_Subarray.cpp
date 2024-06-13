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
  long int sum=(n*(n+1))/2;
  if(sum%2==0)
  {
    cout<<n<<el;
  }
  else
  {
    cout<<(n-1)<<el;
  }
}
return 0;
}