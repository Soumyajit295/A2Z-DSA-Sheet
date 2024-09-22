/* Qustion statement 

    Given an array, arr. The task is to find the largest element in it.

    Input: arr = [1, 8, 7, 56, 90]
    Output: 90
    Explanation: The largest element of the given array is 90.

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

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the data in the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int maxElement = getLargestElement(arr,size);
    cout<<"Largest Element in the array is : "<<maxElement<<endl;
    return 0;
}