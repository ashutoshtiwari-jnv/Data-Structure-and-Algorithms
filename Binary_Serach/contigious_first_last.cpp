#include<iostream>
#include<vector>

using namespace std;

pair<int,int> first_last_index(vector<int> arr, int k){
    int l = 0, r= arr.size()-1, m;
    int first = -1, last = -1;
    while(l<=r){
        m = (l+r)/2;

        if(arr[m] == k){
            first = m;
            // Check for more min index
            r = m-1;
        }
        else if(arr[m]<k) l = m+1;
        else r = m-1;
    }

    l = 0;
    r= arr.size()-1;

    while(l<=r){
        m = (l+r)/2;

        if(arr[m] == k){
            last = m;
            // Check for more max index
            l = m+1;
        }
        else if(arr[m]<k) l = m+1;
        else r = m-1;
    }

    return {first, last};
}

int main(){
    vector<int> arr = {1,3,5, 7, 9,9,9, 22, 100};
    int k = 9;
    pair<int, int> ind = first_last_index(arr, k);
    cout<<"First index is at: "<< ind.first << "\n"<< "last is at: "<<ind.second<<endl;
    return 0;
}