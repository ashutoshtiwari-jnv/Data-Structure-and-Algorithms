#include<iostream>
#include<vector>

using namespace std;

int search_number(vector<int> v, int n){
    int l = 0, r = v.size()-1, mid;
    while(l <= r){
        mid = l+(r-l)/2;
        if(v[mid] == n) return mid;
        else if(n > v[mid]) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

int main(){
    vector<int> v = {3, 5, 7, 9, 10, 70};
    int n = 100;
    cout<<"Index of search element: "<<search_number(v,n)<<endl;
    return 0;
}