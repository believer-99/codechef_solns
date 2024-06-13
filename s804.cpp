#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
cin.ignore();
while(t--)
{
    int n=0,count=0;
    cin>>n;
    int a[n],b[n];
     int cnt[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[i]=0;
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]>2*b[k])
        {
            cnt[k]=1;
        }
        else if(b[k]>2*a[k])
        {
            cnt[k]=-1;
        }
        else{
            cnt[k]=0;count++;
        }
    }
    cout<<count<<endl;;
}
return 0;
}