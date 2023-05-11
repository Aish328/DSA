#include<bits/stdc++.h>
using namespace std;
/*coding Problem
Problem Statement: Check number recursively
Problem Level: EASY
Problem Description:
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
'true' or 'false'
Sample Input 1 :
3
9 8 10
8

Sample Output 1 :
true

Sample Input 2 :
3
9 8 10
2

Sample Output 2 :
false

*/
//success

int search(int arr[], int n , int k){

    if( n==0){
        return false;
    }
        
    else if(k == search(arr+1 , n-1, k)){
        return true;
    }
    else {
        return false;
    }
}
int main (){
    int n , k ;
    cin >> n; 
    
    int arr[]={9,8,10};
    for(int i = 0 ; i < 3 ; i++){
        cout << arr[i]<<" ";
    }
    cin >> k ; 
    cout<<search(arr,n,k);

}