#include<bits/stdc++.h>
using namespace std;

//success but output is number if indices

/*Problem Description:
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

Sample Input :
5
9 8 10 8 8
8

Sample Output :
1 3 4

@csalgo*/

int AI(int a[], int n , int k ,int op[]){     //op = output array
    if(n == 0){
        return 0 ;
    }
    int ans = AI(a+1 ,n-1 , k, op);  //recursive call
    if(a[0]==k){            //small calculation
        for(int i = ans -1 ; i>=0 ; i--){
            op[i+1]== op[i] +1 ;
        }
        op[0] = 0 ;
        ans ++ ;
    }
    else{
        for(int i = ans -1 ; i >= 0 ; i--){
            op[i] =  op[i] +1 ;
        }
    }
    return *op;
} 
int main(){
int n , k;
int arr[100];
int output[100];
cin >> n ;
for(int i = 0 ; i < n ; i++){
    cin >> arr[i];

}
cin >> k ;
cout << AI(arr , n, k , output);

}
