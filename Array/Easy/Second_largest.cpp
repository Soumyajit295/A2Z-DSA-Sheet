/* Qustion Statement 

    Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

    Input: arr = [12, 35, 1, 10, 34, 1]
    Output: 34
    Explanation: The largest element of the array is 35 and the second largest element is 34.

*/

#include<iostream>
#include<climits>

using namespace std;

int getLargestElement(int arr[],int n){
    int maxElement = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int getSecondLargestElement(int arr[],int n){
    int firstLargestElement = getLargestElement(arr,n);
    int secondLargestElement = INT_MIN;
    bool check = false;
    for(int i=0; i<n; i++){
        if(arr[i] > secondLargestElement && arr[i]!=firstLargestElement){
            secondLargestElement = arr[i];
            check = true;
        }
    }
    if(check) return secondLargestElement;
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
    int secondLargestNumber = getSecondLargestElement(arr,size);
    cout<<"Second Largest number in the array is : "<<secondLargestNumber<<endl;
    return 0;
}