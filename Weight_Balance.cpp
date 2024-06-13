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
  int w1,w2,x1,x2,m;
  cin>>w1>>w2>>x1>>x2>>m;
  if((w2-w1)>=(m*x1) && ((w2-w1)<=(x2*m)))
  {
    cout<<"1"<<el;
  }
  else{
    cout<<"0"<<el;
  }
}
return 0;
}