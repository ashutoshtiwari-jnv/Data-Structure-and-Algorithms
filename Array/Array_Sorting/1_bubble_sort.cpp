#include<iostream>
#include<vector>

using namespace std;

/*
    Bubble Sort= pairs if adjacent elements are compared, and the elements swapped if they are not in order.
    TC = O(n^2)
    SC = O(1) 
*/
vector<int> bubble_sort(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        for (int j=1; j<arr.size()-i; j++){
            if(arr[j-1]>arr[j]){
                int left = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = left;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n, num;
    cout<<"Enter the length of the array:";
    cin>>n;
    cout<<"Enter the array element:";
    for(int i = 0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr = bubble_sort(arr);

    cout<<"Sorted array:";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}