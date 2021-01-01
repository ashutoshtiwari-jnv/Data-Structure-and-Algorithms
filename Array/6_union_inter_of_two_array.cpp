#include<iostream>
#include<cmath>
using namespace std;




int * union_array(int a[],int b[],int alen,int blen)
{
    static int res[100];
    int i ,j,k=0;
    while(i<alen && j<blen)
    {
        if(a[i]<b[j])
        {
            res[k]=a[i];
            k++;
        }
        else if(b[j]<a[i])
        {
            res[k]=b[j];
            k++;
        }
        else
        {
            res[k]=b[j];
            j++;
            i++;
            k++;
        }

    }
    for(int i=0;i<k;i++)
    {
        cout<<res[k]<<" ";
    }
    return res;

}



int main()
{
    int a[10],n,m,b[10];
    int *unio;
    cout<<"Enter the length of the  first array:";
    cin>>n;
    cout<<"Enter the first array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the length of the secomnd array:";
    cin>>m;
    cout<<"Enter the  second array:";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }


    /*cout<<"Array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    
    unio=union_array(a,b,n,m);

    int p=10000;
    int i=0;
    while(p!=0)
    {
        p=*(unio+1);
        cout<<*(unio+i)<<"";
        i++;
    }
    
return 0;
}
