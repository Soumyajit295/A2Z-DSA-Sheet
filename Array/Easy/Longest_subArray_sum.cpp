/* Qustion Statement 

Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.

Examples:

Input : n = 6, arr[] = {10, 5, 2, 7, 1, 9}, k = 15
Output : 4

*/

#include<bits/stdc++.h>

using namespace std;

int maxSubArrayLength(int arr[],int n,int k){
    unordered_map<int,int>mp;
    int sum = 0;
    int maxLength = 0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum == k){
            maxLength = max(maxLength,i+1);
        }
        int rem = sum-k;
        if(mp.find(rem)!=mp.end()){
            int length = i-mp[rem];
            maxLength = max(maxLength,length);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return maxLength;
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
    int sum;
    cout<<"Enter the required sum : ";
    cin>>sum;

    int maxLength = maxSubArrayLength(arr,size,sum);
    cout<<"Maximum subarray length is : "<<maxLength<<endl;
    return 0;
}