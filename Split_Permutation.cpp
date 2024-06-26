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
  if(n==1)
  {
    cout<<"1"<<el;
    continue;
  }
  else if(n==2)
  {
    cout<<"1 2"<<el;
    continue;
  }
  else
  {
    vector<int> result;
    int sum=0;
    if(n%2==1)
    {
      sum=n;
      for (int i=0;i<=n/2;i++) {
        if(i==(n/2))
        {
        result.push_back(n);         
        }
        else{
          result.push_back(i+1);
        result.push_back(n-(i+1));
        }
      }
    }
    else
    {
      sum=n+1;
      for (int i=0;i<n/2;i++) {
          result.push_back(i+1);
        result.push_back(sum-(i+1));
      }
    }
    int len=result.size();
    for (int j=0;j<len;j++) {
    cout<<result[j]<<" ";
    }
    cout<<el;
  }
}
return 0;
}