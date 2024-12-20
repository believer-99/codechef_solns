#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c1=0,c0=0;
    for(ll i=0;i<n-1;i++)
    {
        if(s.substr(i,2)=="11")
            c1++;
        if(s.substr(i,2)=="00")
            c0++;
    }
    if(c1==0 && c0==0)
    {
        cout<<"YES\n";
    }
    else if(c1>=2 || c0>=2)
    {
        cout<<"NO\n";
    }
    else
    {
        if(c0==1 && c1==1)
        {
            cout<<"YES\n";
        }
        else if(c0==1)
        {
            if(s[0]=='1' || s[n-1]=='1')
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            if(s[0]=='0' || s[n-1]=='0')
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}