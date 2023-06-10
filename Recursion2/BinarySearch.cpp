#include<bits/stdc++.h>
using namespace std;

/*Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5

Sample Output:
3*/

// int binarySearch(int arr[], int l, int r, int x)
// {
// if (r >= l)
// {
// int mid = l + (r - l)/2;
// // If the element is present at the middle itself
// if (arr[mid] == x) {
//     cout << true;
// }

// // If element is smaller than mid, then it can only be present
// // in left subarray
// if (arr[mid] > x) {
// return binarySearch(arr, l, mid-1, x);
// }
// else{
//     return binarySearch(arr, mid+1, r, x);
// }
// // Else the element can only be present in right subarray

// }

// }

int Bs(int arr[], int s , int e , int x){
    int mid = s+(e-s)/2;
    
        if(arr[1] == x){
            return 1;
        } 
    
    while(s < e ){
        for(int i = 0 ; i < e ; i++){
        if(arr[mid] > x){
            Bs(arr,s , mid-1 , x);

            }
            else{
                Bs(arr,mid +1 , e , x);
            }
            if(arr[i]== x ){
              return i;
        }
        }
       
        
     
    }
}
    


int main()
{
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr)/ sizeof(arr[0]);
int x = 10;
int result = Bs(arr, 0, n-1, x);
cout << result;
}