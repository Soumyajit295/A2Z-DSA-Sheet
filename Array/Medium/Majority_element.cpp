/* Qustion Statement 

    Given an array nums of size n, return the majority element.

    The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


    Example 1:

    Input: nums = [3,2,3]
    Output: 3

*/

#include<bits/stdc++.h>

using namespace std;

int getMajorityElement(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second > n/2){
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
    int majorityElement = getMajorityElement(arr,size);
    cout<<"Majority Element in the array is : "<<majorityElement<<endl;
    return 0;
}