#include<bits/stdc++.h>
using namespace std;


int length(char a[] ){
    int count = 0 ; 
    for(int i = 0 ; a[i] !='\0' ; i++){
        count ++ ;
    }
    return count;
}

void trim(char arr[]){ 
    int i;
    int len = length( arr );
    for( i = 0 ; i <= len -1; i++){
        if(arr[i] == ' '){
            arr[i+1] << 1 ;
        }
    }
   
    
    
}

int main() {
    char str[] = "Geeks for Geeks";
     int idx = 0 ;
    for(int i = 0 ; str[i] !='\0' ; i++){
        if(str[i] != ' '){
           
            str[idx] = str[i] ;
            idx++;
        }
    } 

    for (int i = idx; str[i] != '\0' ; i++){
        str[i] = ' ';
    }
    cout << str ;
    }