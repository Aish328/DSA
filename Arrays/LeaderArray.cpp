#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is leader if it is greater 
than or equal to all the elements to its right side. The rightmost element is always a leader. */
/*Input: arr[] = {16, 17, 4, 3, 5, 2}, 
Output: 17, 5, 2

Input: arr[] = {1, 2, 3, 4, 5, 2}, 
Output: 5, 2*/

vector<int> leader(int arr[] , int n){
    vector<int> ldr ;
    
    // for(int i = n-2 ; i >= 0 ; i--){
    //     ldr.push_back(arr[i]);
    //     if(arr[i] >= arr[i-1]){
          
    //         ldr.push_back(arr[i]);

    //     }

    //     return ldr ;
    // }
    
    for(int i = 0 ; i < n; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]< arr[j]){
                break;
            }
            if(j== n){
                ldr.push_back(arr[i]) ;
            }
            return ldr;
        }
    }
    
}



int main(){
    // cout<< "enter size of array " << endl;
    // int n ;
    // int a[6];
    // cin >> n;
    // cout << "input Array" << endl ;
    // for(int i = 0 ; i<= 6 ; i++){
    //     cin >> a[i] ;
    // }
    // cout<< "a";
    int a[] = {16, 17, 4, 3, 5, 2};

    cout << leader(a,6);
    
 
}