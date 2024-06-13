#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    getline(cin,s);
    string str;
    int n=s.size();
    int count=1;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]==s[i+1])
        {
            continue;count++;
        }
        else 
        {
         str+=s[i]+(char)(count)-'0';  
        }
    }
    int m=str.size();
    for(int j=m-1;j>=0;j--)
    {
        cout<<str[j];
    }
    
    return 0;
}
