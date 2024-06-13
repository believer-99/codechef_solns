#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n=0,a[n];
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
        if(a[n-1]>a[n-2])
        {
            cout<<"Marichka";
        }
        else
        {
            for(int j=n-2;j>=0;j--)
            {
                if(a[j]==a[n-1])
                {
                    count++;
                }
            }
            if(count%2==0)
            {
                cout<<"Marichka"<<endl;
            }
            else
            {
                cout<<"Zenyk";
            }
        }
	}
	return 0;
}