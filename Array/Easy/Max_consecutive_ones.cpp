/* Qustion Statement 

    Given a binary array nums, return the maximum number of consecutive 1's in the array.

    Example 1:

    Input: nums = [1,1,0,1,1,1]
    Output: 3

*/

#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveCount(int arr[],int n){
    int maxCount = 0;
    int currentCount = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            currentCount++;
            maxCount = max(maxCount,currentCount);
        }
        else{
            currentCount = 0;
        }
    }
    return maxCount;
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
    int consecutiveCount = maxConsecutiveCount(arr,size);
    cout<<"Maximum consecutive count of 1 in the array is : "<<consecutiveCount<<endl;
    return 0;
}