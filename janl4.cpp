#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,temp,t;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]>=a[j+1])
	            {
	                temp=a[j+1];
	                a[j+1]=a[j];
	                a[j]=temp;
	            }
	            if(b[j]>=b[j+1])
	            {
	                t=b[j+1];
	                b[j+1]=b[j];
	                b[j]=t;
	            }
	            
	        }
	    }
	    cout<<(abs(b[1]-a[0]))<<endl;
	}
	return 0;
}
