//solving this sorting type of problem using Dutch national flag problem method

#include<bits/stdc++.h>

using namespace std;

int sort2(int a[],int len)
{
    int low=0,high=len-1;
    while(low<=high)
    {
        if(a[low]>0)
        {
            swap(a[low],a[high--]);
        }
        else
        {
            low++;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
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
    sort2(a,n);
    return 0;

}