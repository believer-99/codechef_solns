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
  int x;
  cin>>x;
  int num =2;
  while(num<=x)
  {
    num*=2;
  }
  int rem = (num) - x;
  if(rem==0)cout<<"0"<<el;
  else cout<<(x-(num - x))<<el;
}
return 0;
}