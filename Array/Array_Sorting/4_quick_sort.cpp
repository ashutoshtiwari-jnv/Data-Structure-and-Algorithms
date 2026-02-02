#include<iostream>
#include<vector>

using namespace std;

/*
*   Quick Sort is fast and popular sorting algorithm, but it is not perfect.
*/

int partiation(vector<int>& arr, int start, int end){
    int i = start - 1;
    int pivot = arr[end];
    for(int j = start; j<end; j++){
        if(arr[j]< pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quick_sort(vector<int>& arr, int start, int end){
    if(end <= start){
        return;
    }

    int pivot = partiation(arr, start, end);
    quick_sort(arr, start, pivot-1);
    quick_sort(arr, pivot+1, end);
}


int main(){

    vector<int> arr = vector({3,5,1,2,9});

    quick_sort(arr, 0, 4);

    cout<<"Sorted array are:";

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

