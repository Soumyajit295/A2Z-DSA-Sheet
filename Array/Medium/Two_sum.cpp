/* Qustion Statement 

    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.

    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]

*/

#include<bits/stdc++.h>

using namespace std;

vector<int>TwoSumIndexes(int arr[],int n,int target){
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        int rem = target-arr[i];
        if(mp.find(rem)!=mp.end()){
            ans.push_back(i);
            ans.push_back(mp[rem]);
            sort(ans.begin(),ans.end());
            break;
        }
        mp[arr[i]] = i;
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the data in the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    vector<int>ans;
    ans = TwoSumIndexes(arr,size,target);
    cout<<"Two sum indexes are : "<<ans[0]<<" and "<<ans[1]<<endl;
    return 0;
}