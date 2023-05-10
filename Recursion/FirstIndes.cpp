#include<bits/stdc++.h>
using namespace std;

//success

/*Problem Statement: First Index
Problem Level: EASY
Problem Description:
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
first index or -1

Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
1*/
int check(int arr[], int n , int k){
    if(n == 0){
        return -1;
    }
    else if(arr[0]==k){
        return 0 ;
    }
    else{
        int ans = check( arr +1 , n-1, k);
        if(ans == -1){
            return -1;
        }
        else{
            return ans +1;
        }
    }
}
int main(){
    int n, k ;
    int a[100];
    cout << "enter size" <<  endl ;
    cin >> n ;
    cout << " enter array"<< endl;
    for(int i = 0 ; i < n;i++ ){
        cin >> a[i];
        cout << a[i]<< " ";
    }
    cout<<"enter key"<< endl ;
    cin >> k ;
    cout<<"the key is present at "<< check(a,n,k);

}