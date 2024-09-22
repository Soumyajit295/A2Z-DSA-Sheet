/* Qustion Statement

    Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

    You must implement a solution with a linear runtime complexity and use only constant extra space.

    Example 1:

    Input: nums = [2,2,1]
    Output: 1

*/

#include<bits/stdc++.h>

using namespace std;

int findSingleOne(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second == 1){
            return i.first;
        }
    }
    return -1;
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
    int singleElement = findSingleOne(arr,size);
    cout<<"Element which occure only single time is : "<<singleElement<<endl;
    return 0;
}