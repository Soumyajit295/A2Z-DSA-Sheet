/* Qustion Statement 

    Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct elements in the two arrays. Return the elements in sorted order.

    Example 1:

    Input: 
    n = 5, arr1[] = {1, 2, 3, 4, 5}  
    m = 5, arr2 [] = {1, 2, 3, 6, 7}
    Output: 
    1 2 3 4 5 6 7

*/

#include<bits/stdc++.h>

using namespace std;

vector<int>findUnion(int arr1[],int arr2[],int n,int m){
    unordered_map<int,bool>mp;
    vector<int>ans;
    int i=0,j=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(mp.find(arr1[i])==mp.end()){
                mp[arr1[i]] = true;
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(mp.find(arr2[j])==mp.end()){
                mp[arr2[j]] = true;
                ans.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(mp.find(arr1[i])==mp.end()){
                mp[arr1[i]] = true;
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i < n){
        if(mp.find(arr1[i])==mp.end()){
            mp[arr1[i]] = true;
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j < m){
        if(mp.find(arr2[j])==mp.end()){
            mp[arr2[j]] = true;
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}

int main(){
    int size1;
    cout<<"Enter the size of the array1 : ";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the data in the array1 : ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    int size2;
    cout<<"Enter the size of the array2 : ";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the data in the array2 : ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
    vector<int>ans;
    ans = findUnion(arr1,arr2,size1,size2);

    cout<<"Union : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}