//given an array which consist of only 0,1,2 sort the array without using any sorting array
//using Dutch National flag problm method of solving   

#include<bits/stdc++.h>

using namespace std;

int sort2(int a[],int len)
{
    int low=0,high=len-1,mid=0;
    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0:
                swap(a[low++],a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid],a[high--]);
                break;
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
    int a[100],n;
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