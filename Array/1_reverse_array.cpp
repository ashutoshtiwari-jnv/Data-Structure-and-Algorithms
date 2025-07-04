#include<iostream>
#include<cmath>
using namespace std;

// if have a vector then use direct fuction reverse(v.begin(),v.end()) for reversing vector


void reverse_array(int a[],int len)
{
    for(int i=0;i<ceil(len/2);i++)
    {
        int c=a[i];
        a[i]=a[len-(i+1)];
        a[len-(i+1)]=c;
    }

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
    reverse_array(a,n);
    cout<<"The new reversed array is:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}
