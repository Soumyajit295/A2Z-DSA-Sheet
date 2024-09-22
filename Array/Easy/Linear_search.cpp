/* Qustion Statement 

    Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.
    Example 1:

    Input:
    N = 5, K = 6
    arr[] = {1,2,3,4,6}
    Output: 1

*/

#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
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
    int key;
    cout<<"Enter the key which you want to search : ";
    cin>>key;

    int check = linearSearch(arr,size,key);

    if(check == 1){
        cout<<"Key is present at the array"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}