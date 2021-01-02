#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,a[101];
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n );
		
	    int count1=INT_MAX;
		int some = 0;
		for(int i = 0 ; i <n ; i++)
		{
			int diff=1001;
	    	int last=n-1;
	    	int count=0;
	    	int num = a[i] + k;
			while(1)
	    	{
	        	if(a[last]>num)
	        {
	            count=count+abs(a[last]-num);
	            last--;
	        }
	        else
	        {
	            break;
	        }
	    }
		// cout<<count<<" "<<some<<endl;
		count1 = min(count1 , count+some);
		some+=a[i];
	}

	cout<<count1<<endl;
	    
	}
	return 0;
}