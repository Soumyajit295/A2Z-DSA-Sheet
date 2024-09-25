/* Qustion Statement 

    Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

    Examples:

    Input: arr[] = {15,-2,2,-8,1,7,10,23}, n = 8
    Output: 5

*/

#include<bits/stdc++.h>

using namespace std;

int maximumSubArrayLength(int arr[],int n){
    int maxLen = 0;
    unordered_map<int,int>mp;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum == 0){
            maxLen = max(maxLen,i+1);
        }
        if(mp.find(sum)!=mp.end()){
            int len = i-mp[sum];
            maxLen = max(maxLen,len);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return maxLen;
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
    int maxLength = maximumSubArrayLength(arr,size);
    cout<<"Maximum subarray length with zero sum : "<<maxLength<<endl;
    return 0;
}