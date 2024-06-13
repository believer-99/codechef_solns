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
  int n,m;
  cin>>n>>m;
  int bat[n],bowl[m];
  int nn=max(m,n);
  int mm=max(m,n);
  int batt[nn]={0},bowll[mm]={0};
  for (int i=0;i<n;i++) {
  cin>>bat[i];
  batt[i]=bat[i];
  }
  for (int j=0;j<m;j++) {
  cin>>bowl[j];
  bowll[j]=bowl[j];
  }
  if(n<4 || m<4) cout<<"-1"<<el;
  else{
    sort(batt,batt+nn,greater<int>());
    sort(bowll,bowll+mm,greater<int>());
    int k=4,l=4;
    int count=0,sum=0;
    int sum1=accumulate(batt,batt+4,0);
    int sum2=accumulate(bowll,bowll+4,0);
    sum=sum1+sum2;
    while((k<nn && l<mm) && count<3)
    {
      if(batt[k]>bowll[l])
      {
        sum+=batt[k];
        if(k!=nn-1)++k;
      }
      else{
        sum+=bowll[l];
       if(l!=mm-1) ++l;
      }
      count++;
    }
    cout<<sum<<el;
  }
}
return 0;
}