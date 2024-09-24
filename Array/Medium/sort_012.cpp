/* Qustion Statement 

    Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

    We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

    You must solve this problem without using the library's sort function.

    Example 1:

    Input: nums = [2,0,2,1,1,0]
    Output: [0,0,1,1,2,2]

*/

#include<bits/stdc++.h>

using namespace std;

void sort(int arr[],int n){
    int countZeros = 0,countOnes = 0,countTwos = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) countZeros++;
        if(arr[i] == 1) countOnes++;
        if(arr[i] == 2) countTwos++;
    }
    int it = 0;
    while(it!=countZeros){
        arr[it] = 0;
        it++;
    }
    while(it!=countOnes+countZeros){
        arr[it] = 1;
        it++;
    }
    while(it!=countZeros+countOnes+countTwos){
        arr[it] = 2;
        it++;
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
    sort(arr,size);
    cout<<"Updated Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}