#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {4,1};
    int l = 0, r = v.size()-1, m;

    while (l<r){
        m = (l+r)/2;

        if(v[m] > v[r]) l = m+1;
        else r = m;
    }
    cout<<"Minimum element in the rotated array is: "<<v[l]<<endl;
    return 0;
}