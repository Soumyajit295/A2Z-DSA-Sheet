/* Qustion statement 

    Given an integer array nums, find a
    subarray
    that has the largest product, and return the product.

    The test cases are generated so that the answer will fit in a 32-bit integer.

    Example 1:

    Input: nums = [2,3,-2,4]
    Output: 6

*/

#include<bits/stdc++.h>

using namespace std;

int getMaximumSubArrayProduct(int arr[],int n){
    int currentMax = arr[0],currentMin = arr[0],result = currentMax;
    for(int i=1; i<n; i++){
        if(arr[i] < 0){
            swap(currentMax,currentMin);
        }
        currentMax = max(arr[i],arr[i]*currentMax);
        currentMin = min(arr[i],arr[i]*currentMin);

        result = max(result,currentMax);
    }
    return result;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the number in the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int maxSubarrayProduct = getMaximumSubArrayProduct(arr,size);
    cout<<"Maximum subarray product is : "<<maxSubarrayProduct<<endl;
    return 0;
}