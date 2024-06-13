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
  int a,b,a1,b1,a2,b2;
  cin>>a>>b>>a1>>b1>>a2>>b2;
  if((a==a1 || a==b1 ) && (b==a1 || b==b1))
  {
    cout<<"1"<<el;
  }
  else if((a==a2 || a==b2 ) && (b==a2 || b==b2))
  {
    cout<<"2"<<el;
  }
  else{
    cout<<"0"<<el;
  }
}
return 0;
}