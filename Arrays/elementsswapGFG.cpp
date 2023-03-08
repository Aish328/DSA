#include<bits/stdc++.h>
using namespace std;

// earrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.
void printArray( int arr[], int n){
    for(int i = 0; i <= n-1 ; i++){
    cout<< arr[i]  ;

}
}

void rearrange(int arr[] , int n ){
    int s = 0 ;
    int  e= n - 1 ;
    while( s < e ){
        int mid = s+ (e -s)/2 ;
        int temp;
        for(int i = 0 ; i < n-1 ; i++){
            arr[n-1] = temp ;
            arr[i] = arr[i++] ;
            arr[i] = temp ;
        }
    }


}
int main(){
    int i;
    
    int array[] = { 1,2,3,4,5,6};

   
    for(int i = 0; i<= 6; i++){
        cout << array[i] << endl;
    
    rearrange(array , 6) ;
     
        cout << array[i] << endl;
    }

    return 0;
    
}