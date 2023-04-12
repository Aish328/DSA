#include<bits/stdc++.h>
using namespace std;


// Question:Given a matrix mat[][], print it in Wave Form. 

// Input: mat[][] = {{  1,   2,   3,   4}
//                            {  5,   6,   7,   8}
//                            {  9, 10, 11, 12}
//                            {13, 14, 15, 16}
//                            {17, 18, 19, 20}}
// Output: 1 5 9 13 17 18 14 10 6 2 3 7 11 15 19 20 16 12 8 4 
// Explanation: Output is printed in wave form. 

// Input: mat[][] = {{1,   9,  4, 10}
//                           { 3,   6, 90, 11}
//                           { 2, 30, 85, 72}
//                           { 6, 31, 99, 15}} 
// Output: 1 3 2 6 31 30 6 9 4 90 85 99 15 72 11 10

void Wave(int a[][100],int n ){
    for(int j = 0 ; j <= n ; j++){
        if(j%2 == 0){
            for(int i = 0 ; i <= j ; i++ ){
                cout << a[i][j] << " ";
            }
        }
        else{
            for(int i = n-1 ; i>= 0 ; i--){
                cout << a[i][j] << " "  ;
            }
        }
    }
    
    }

    int main(){
        int arr[][100]= {{1,   9,  4, 10},
                    { 3,   6, 90, 11} ,           
                    { 2, 30, 85, 72},
                 { 6, 31, 99, 15}};
        Wave(arr , 5);
    cout << arr ;
    }
