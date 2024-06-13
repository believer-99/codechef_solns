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
  int l,r;
  cin>>l>>r;
  cout<<((2*(r-l))+1)<<el;
}
return 0;
}