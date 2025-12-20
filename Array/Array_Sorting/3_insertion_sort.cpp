#include<iostream>
#include<vector>

using namespace std;

vector<int> insertion_sort(vector<int> arr){
    for(int i =0; i< arr.size()-1; i++){
        int j = i+1;
        int temp = arr[j];

        while(j!=0){
            if(arr[j-1]>temp){
                arr[j] = arr[j-1];
                j--;
            }
            else{
                break;
            }
        }
        arr[j] = temp;
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n, num;

    cout<<"Enter length of the array:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }

    arr = insertion_sort(arr);

    cout<<"Sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}