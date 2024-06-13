#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n=0,a0=0,a1=0,b0=0,b1=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        {
	            a0++;
	        }
	        else
	        {
	            a1++;
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	        if(b[j]==0)
	        {
	            b0++;
	        }
	        else
	        {
	            b1++;
	        }
	    }
	    if((b1==0 || a1==0)&& (b0!=n || a0!=n))
	    {
	        cout<<"NO"<<endl;return 0;
	    }
	    for(int k=0;k<n;k++)
	    {
	        if((a[k]==0||b[k]==0) && (a[k]==1||b[k]==1))
	        {
	            cout<<"NO"<<endl;return 0;
	        }
	    }
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}
