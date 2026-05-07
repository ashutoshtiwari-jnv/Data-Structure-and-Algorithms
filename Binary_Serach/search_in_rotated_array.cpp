#include<iostream>
#include<vector>
using namespace std;

int search_in_rotated_array(vector<int> arr, int k){
    int l = 0, r = arr.size()-1, m;

    while(l<=r){
        m = (l+r)/2;
        
        if(arr[m] == k) return m;
        else if(arr[m] <= arr[r]){
            if(arr[m]< k && k<=arr[r]) l = m+1;
            else r = m-1;
        }
        else {
            if(arr[l]<k &&  k <= arr[m]) r = m-1;
            else l = m+1;
        }
    }
    return -1;
}

int main (){
    vector<int> v = {12, 17, 19, 1, 2, 3, 5, 7, 8, 9, 10};
    int k = 9;
    cout<<"Element is at index: "<< search_in_rotated_array(v, k)<<endl;
    return 0;
}