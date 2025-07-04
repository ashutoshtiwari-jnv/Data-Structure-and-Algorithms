#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



// Brute-Force Algorithm T(n) = O(Algo to sort the array)
int Kth_Max(vector<int> v,int k)
{
    int Kth_Max;
    int len=v.size();
    sort(v.begin(),v.end());
    Kth_Max=v[len-k];
    return Kth_Max;

}

// Brute-Force Algorithm T(n) = O(Algo to sort the array)
int Kth_Min(vector<int> v,int k)
{
    int Kth_Min;
    int len=v.size();
    sort(v.begin(),v.end());
    Kth_Min=v[k-1];
    return Kth_Min;
}



int main()
{
    int a[10],n,k,e;
    vector<int> v;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the k th value:";
    cin>>k;
    cout<<"K th Maximum Element of the array is:"<<Kth_Max(v,k)<<endl;
    cout<<"K th Minimum Element of the array is:"<<Kth_Min(v,k)<<endl;
return 0;

}