#include<iostream>
#include<vector>

using namespace std;

/*
    Insertion Sort: First Start from second element from the list. Traverse back and sift all elements to left
        which is greater then the temp and insert this element to their place and so on.
    TC = O(n^2)
    SC = O(2)
*/

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