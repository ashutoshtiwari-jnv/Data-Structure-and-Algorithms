#include<iostream>
 using namespace std;

int rotate_clockwise(int a[],int len)
{
    int last=a[len-1];
    for(int i=len-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=last;
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0; 
}

 int main()
 {
    int a[40],n;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the element of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rotate_clockwise(a,n);
    rotate_clockwise(a,n);
    rotate_clockwise(a,n);
    rotate_clockwise(a,n);
    rotate_clockwise(a,n);
    return 0; 

 }