#include <iostream>
using namespace std;

int main() {
	int a,b[100],c;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>c;
	int zeros=0,ones=0,twos=0;
	for(int i=0;i<c;i++)
	{
	    cin>>b[i];
	}
	for(int i=0;i<c;i++)
	{
	    if(b[i]==0)
	    {
	        zeros++;
	    }
	    else if(b[i]==1)
	    {
	        ones++;
	    }
	    else if(b[i]==2)
	    {
	        twos++;
	    }
	}
	
	for(int i=0;i<c;i++)
	{
	    if(i>=0 && i<zeros)
	    {
	        b[i]=0;
	    }
	    else if(i>=zeros && i<=zeros-1+ones)
	    {
	        b[i]=1;
	    }
	    else 
	    {
	        b[i]=2;
	    }
	}
	    	    
	for(int i=0;i<c;i++)
	{
	    cout<<b[i]<<" ";
	}
	cout<<endl;
}
	
	return 0;
}
