#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n=0,mx=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count[n];
	    for(int j=0;j<n;j++)
	    {
	        for(int k=0;k<n;k++)
	        {
	            if(a[k]==a[j])
	            {
	                count[j]++;
	            }
	        }
	        if(mx<=count[j])
	        {
	            mx=count[j];
	        }
	        
	    }
	    cout<<(n-mx)<<endl;
	}
	return 0;
}
