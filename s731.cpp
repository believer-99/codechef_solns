#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,rem;
	    cin>>n;
	    int count=0;
	    while(n)
	    {
	        rem=n%10;
	        if(rem==7)
	        {
	            count++;
	        }
	        n=n/10;
	    }
	    if(count>=1)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
