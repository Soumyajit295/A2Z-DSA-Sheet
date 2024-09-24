/* Qustion statement 

Given an integer array nums, find the
subarray
with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6

*/

#include<bits/stdc++.h>

using namespace std;

int maximumSubArraySum(int arr[],int n){
    int currentSum = 0;
    int maximumSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum+=arr[i];
        maximumSum = max(maximumSum,currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maximumSum;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the number in array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int maximumSum = maximumSubArraySum(arr,size);
    cout<<"Maximum subarray sum is : "<<maximumSum<<endl;
    return 0;
}