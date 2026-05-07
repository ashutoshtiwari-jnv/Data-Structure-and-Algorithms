#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Size of array is: "<<sizeof(arr)<<endl; // 40 bytes (4 bytes for each int)
    cout<<"Number of elements in array is: "<<sizeof(arr)/sizeof(arr[0])<<endl; // 10 elements
    return 0;
}