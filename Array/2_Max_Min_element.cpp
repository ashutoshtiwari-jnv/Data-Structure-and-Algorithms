#include<iostream>
using namespace std;

int Max(int a[],int len)
{
    int max=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
return max;
}

int Min(int a[],int len)
{
    int min=a[0];
    for(int i=1;i<len;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
return min;
}



int main()
{
    int a[10],n;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Maximum Element of the array is:"<<Max(a,n)<<endl;
    cout<<"Minimum Element of the array is:"<<Min(a,n)<<endl;
return 0;
}
