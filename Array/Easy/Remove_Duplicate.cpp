/* Qustion Statement

    Given a sorted array arr. Return the size of the modified array which contains only distinct elements.
    Note:
    1. Don't use set or HashMap to solve the problem.
    2. You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array.

    Examples :

    Input: arr = [2, 2, 2, 2, 2]
    Output: [2]

*/

#include<iostream>
#include<vector>

using namespace std;

int remove_duplicate(vector<int> &arr) {
    int i = 0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }       
    return i+1;
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

    int updatedSize = remove_duplicate(arr);
    cout<<"Updated vector look like : ";
    for(int i=0; i<updatedSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}