#include<iostream>
#include<vector>

using namespace std;

/* 
    Selection Sort= Select the min/max no from the array and put it in front/last. then go for next min/max and put it in second last/front so on.
    TC = O(n^2)
    SP = O(3)/O(2)
    Only used for leaning purpose. Not for prod.
*/
vector<int> selection_sort(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        int min = arr[i];
        int index = i;
        for (int j=i+1; j<arr.size(); j++){
            if(arr[j]<min){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    return arr;
}

vector<int> selection_sort2(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        int min = i;   // Direct storing index to min
        for (int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[min]){   // if you want to sort in decending order just replace < to >
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return arr;
}

int main(){
    vector<int> arr;
    int n, num;

    cout<<"Enter the lenght of the array:";
    cin>>n;
    cout<<"Enter the array element:";
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }

    cout<<endl;
    arr = selection_sort(arr);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}