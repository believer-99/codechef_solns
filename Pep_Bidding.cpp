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
  int aa[n],ad[n],pa[n],pd[n];
  for (int i=0;i<n;i++) {
  cin>>aa[i];
  }
  for (int j=0;j<n;j++) {
  cin>>ad[j];
  }
  for (int k=0;k<n;k++) {
  cin>>pa[k];
  }
  for (int l=0;l<n;l++) {
  cin>>pd[l];
  }
  int taa=accumulate(aa,aa+n,0);
  int tad=accumulate(ad,ad+n,0);
  int tpa=accumulate(pa,pa+n,0);
  int tpd=accumulate(pd,pd+n,0);
if(taa>tpa && tad>tpd)
{
  cout<<"A"<<el;
}
else if(tpa>taa && tpd>tad)
{
  cout<<"P"<<el;
}
else{
  cout<<"DRAW"<<el;
}

}
return 0;
}