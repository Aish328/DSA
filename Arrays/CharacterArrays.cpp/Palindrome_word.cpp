#include<bits/stdc++.h>
using namespace std;
// success
//A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

bool result(char arr[50]){
    int length = strlen(arr);
    for( int i = 0 ; i <= length ; i++){
    arr[i] == arr[length-i-1];
    }


}


int main(){
    char b[50];
    cin >> b ;
    result(b);
    if( result (b) == true){
        return true;
    }
    else{
        return false ;
    }
   return 0;
}

