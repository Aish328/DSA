#include<bits/stdc++.h>
using namespace std;
 int insertionSort( int arr[] , int n ){
    for (int i = 1; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
        for( ; j >= 0 ; j--){
            if( arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]= temp ; 
    return temp ; 


    }

 }

 int main(){
    int n=10;

    int array[n];

      cout << " enter the elements of the array" << endl ;
      for (int i = 0 ; i <= n-1 ; i++){
        cin >> array[i] ;
      }
      cout << " the array sorted by insertion sort is : " << insertionSort(  array ,  n );
      return 0 ;
 }