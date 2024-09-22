/* Qustion Statement 

    Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

    Example 1:

    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]

*/

#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>&arr,int startIndex,int endIndex){
    int i = startIndex;
    int j = endIndex;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void leftRotate(vector<int>&arr,int k){
    int endIndex = arr.size()-1;
    int startIndex = endIndex-k;
    rotate(arr,startIndex+1,endIndex);
    rotate(arr,0,startIndex);
    rotate(arr,0,arr.size()-1);
}

int main(){
    int data;
    int size;
    cout<<"Enter the size of vector : ";
    cin>>size;
    vector<int>arr;
    cout<<"Enter data in the vector : ";
    for(int i=0; i<size; i++){
        cin>>data;
        arr.push_back(data);
    }
    int k;
    cout<<"Rotation count : ";
    cin>>k;
    leftRotate(arr,k);
    cout<<"Updated Vector : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
