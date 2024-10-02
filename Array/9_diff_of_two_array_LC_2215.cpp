#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

// TC = O(n*m)
// SC = O(n+m)
vector<vector<int>> findDifferenceMTD1(vector<int>& nums1, vector<int>& nums2) {
    set<int> firstDiff;
    set<int> secondDiff;
    vector<vector<int>> res;

    for(int i=0; i<nums1.size(); i++){
        bool find = false;
        for(int j=0; j<nums2.size(); j++)
        {
            if(nums1[i] == nums2[j]){
                find = true;
                break;
            }
        }
        if(!find){
            firstDiff.insert(nums1[i]);
        }
    }
    vector<int> vc(firstDiff.begin(),firstDiff.end());
    res.push_back(vc);

    for(int i=0; i<nums2.size(); i++){
        bool find = false;
        for(int j=0; j<nums1.size(); j++)
        {
            if(nums2[i] == nums1[j]){
                find = true;
                break;
            }
        }
        if(!find){
            secondDiff.insert(nums2[i]);
        }
    }
    vector<int> pc(secondDiff.begin(),secondDiff.end());
    res.push_back(pc);
    return res;
}

vector<vector<int>> findDifferenceMTD2(vector<int>& nums1, vector<int>& nums2){
    vector<vector<int>> res;
    map<int, int> key_map;
    vector<int> firstDiff;
    vector<int> secondDiff;

    for(int i: nums1){
        key_map.insert(pair<int, int>(i, 1));
    }
    for(int i: nums2){
        if(!key_map[i]){
            secondDiff.push_back(i);
        }
    }
    key_map.clear();
    for(int i: nums2){
        key_map.insert(pair<int, int>(i, 1));
    }
    for(int i: nums1){
        if(!key_map[i]){
            firstDiff.push_back(i);
        }
    }
    res.push_back(firstDiff);
    res.push_back(secondDiff);
    return res;
}

int main(){
    int n,m,num;
    vector<int> first;
    vector<int> second;
    cout<<"Enter the length of the first array:";
    cin>>n;
    cout<<"Enter the element of the first array:";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        first.push_back(num);
    }
    cout<<"Enter the length of the second array:";
    cin>>m;
    cout<<"Enter the element of the second array:";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        second.push_back(num);
    }

    cout<<"Solution using Method1"<<endl;
    vector<vector<int>> res1 = findDifferenceMTD1(first, second);
    for(int i=0; i<res1.size(); i++){
        cout<<"[";
        for(int j=0; j<res1[i].size(); j++){
            cout<<res1[i][j]<<",";
        }
        cout<<"]";
        cout<<endl;
    }

    cout<<"Solution using Method2"<<endl;
    vector<vector<int>> res2 = findDifferenceMTD2(first, second);
    for(int i=0; i<res2.size(); i++){
        cout<<"[";
        for(int j=0; j<res2[i].size(); j++){
            cout<<res2[i][j]<<",";
        }
        cout<<"]";
        cout<<endl;
    }
    return 0;
}