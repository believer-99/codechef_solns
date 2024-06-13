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
  int x;
  cin>>x;
  if(x>=1 && x<100)
  {
    cout<<"Easy"<<el;
  }
  else if(x>=100 && x<200)
  {
    cout<<"Medium"<<el;
  }
  else if(x>=200 && x<300)
  {
    cout<<"Hard"<<el;
  }
}
return 0;
}