#include<bits/stdc++.h>
using namespace std;

// successful
int printArray(int arr[], int n ){
    for( int i = 0 ; i <= n-1 ; i++){
        cout << arr[i];
    }
}

void swapAlternate( int arr[], int size){
    for (int i = 0 ; i <= size -1 ; i += 2){
        if(i+1 < size ){
             int temp;
             temp = arr[i+1];
             arr[i+1] = arr[i];
             arr[i] = temp;
        }
        
    }
}


int main (){
    int odd[] = {1,2,3,4,5};
    int even[] = {1,2,3,4,5,6};
   swapAlternate( odd, 5);

   printArray( odd , 5 );
   swapAlternate(even , 6);
   printArray( even , 6 );

   return 0 ;
}
