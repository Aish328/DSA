#include<bits/stdc++.h>
using namespace std;
//  Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.
// code correct
//time limit exceeded
void PrintArray( int arr[] , int  n){
    for( int i = 0 ; i <= n-1 ; i++){
        cout << arr[i] << " " << endl;
    }
}

 void rearrange(int arr[], int n) 
    { 
    	for ( int i = 0 ; i < n ;  i += 2){
    	    int temp = arr[n-1];
    	    for ( int j = n-2 ; j >= i ; j--){
    	        arr[j+1] = arr[j];
    	        
    	    }
    	    arr[i] = temp ;
    	}
   
    }

int main(){
    int n = 10;
    int array[n];
    
    cout<< "enter the array :";
    for(int i = 0 ; i <= n-1 ; i++){
        cin >> array[i] ;

    }
    PrintArray(array , n);
    rearrange(array , n);
    PrintArray(array,n);
}