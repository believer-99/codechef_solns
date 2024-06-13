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
  int a,b;
  cin>>a>>b;
  if((a-b)>=10)
  {
    cout<<"0"<<el;
  }
  else{
    cout<<ceil(abs((a-b)-10)/3.0)<<el;
  }
}
return 0;
}