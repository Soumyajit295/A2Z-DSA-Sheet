/* Qustion Statement 

    Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

    Example 1:

    Input: nums = [3,0,1]
    Output: 2

*/

#include<iostream>
#include<unordered_map>

using namespace std;

int findMissing(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(int i=0; i<n+1; i++){
        if(mp.find(i) == mp.end()){
            return i;
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
    int missingElement = findMissing(arr,size);
    cout<<"Missing element is : "<<missingElement<<endl;
    return 0;
}