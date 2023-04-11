#include<bits/stdc++.h>
using namespace std;
//success
void printArray(int arr[], int n){
    for(int j = 0 ; j<=n ; j++){
        cout << arr[j];
    }
    cout << endl;
}

void bubblesort(int arr[] , int n ){
    for(int i = 0; i < n-1 ; i++){
        for (int j = 0 ; j < n-1 ; j++){
            if( arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp ;

    
            }
        }
    }
}

int main(){
    cout<< "enter the array : ";

    int n = 10;
    int arr[n];
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];

    }
    printArray(arr , 10);
    
    bubblesort(arr, 10);

    printArray( arr , 10);
    
    

}