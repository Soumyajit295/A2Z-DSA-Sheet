/* Qustion Statement 

    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

    Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

    Example 1:

    Input: prices = [7,1,5,3,6,4]
    Output: 5

*/

#include<bits/stdc++.h>

using namespace std;

int maxProfit(int arr[],int n){
    int minPrice = arr[0];
    int maxProfit = 0;
    for(int i=1; i<n; i++){
        int cost = arr[i]-minPrice;
        maxProfit = max(maxProfit,cost);
        minPrice = min(minPrice,arr[i]);
    }
    return maxProfit;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the data in the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int profit = maxProfit(arr,size);
    cout<<"Max Profit : "<<profit<<endl;

}