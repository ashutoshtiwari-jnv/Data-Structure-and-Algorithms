#include<iostream>
#include<vector>

using namespace std;

// lower_bound : arr[i] >= k
int lower_bound(vector<int> arr, int k){
    int l = 0, r = arr.size()-1, m;
    int lb;

    while (l<=r){
        m = (l+r)/2;

        if(arr[m] >= k) {
            lb = m;
            r = m-1;
        }
        else l = m+1;
    }
    return lb;
}

int upper_bound(vector<int> arr, int k){
    int l = 0, r = arr.size()-1, m;
    int ub;
    while (l<=r){
        m = (l+r)/2;

        if(arr[m] > k) {
            ub = m;
            r = m-1;
        }
        else l = m+1;
    }
    return ub;
}

int main(){
    vector<int> v = {2,3,5,5,7,9,10};
    int k = 5;
    cout<<"Lower bound: "<< lower_bound(v, k)<<endl;
    cout<<"Upper bound: "<< upper_bound(v, k)<<endl;
    return 0;
}