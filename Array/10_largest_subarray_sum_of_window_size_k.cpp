// Ques: Find the largest contigious subarray sum from an array if window size k

#include<bits/stdc++.h>
using namespace std;

int largest_subarray_sum(int arr[7], int k){
    int largest_sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n ; i++){
        int window_sum = 0;
        for(int j = i; j<i+k; j++){
            window_sum += arr[j];
        }
        if(window_sum> largest_sum){
            largest_sum = window_sum;
        }
    }
    return largest_sum;
}

int main(){
    int arr[] = {2,35,1,6,4,8,9};
    int k = 3;
    cout<< "largest_subarrary_sum: "<<largest_subarray_sum(arr, k);
}