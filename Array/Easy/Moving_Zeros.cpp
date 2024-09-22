/* Qustion Statement 

    Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

    Note that you must do this in-place without making a copy of the array.

    Example 1:

    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]

*/

#include<iostream>

using namespace std;

void moveZeroAtEnd(int arr[],int n){
    int nonZeroIndex = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }
    for(int i=nonZeroIndex; i<n; i++){
        arr[i] = 0;
    }
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
    moveZeroAtEnd(arr,size);
    cout<<"Updated Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}