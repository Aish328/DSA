#include <bits/stdc++.h>
using namespace std;
//given an input string and two characters c1 and c2 . need to replace every occurence of c1 with c2 in
//the given string 
//success
void replace(char arr[], int c1 , int c2){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == c1){
           arr[i] = c2 ;
            
           }
    }
}

int main (){
    char c1 ;
    char  c2 ;
    cout<<"input a string" << endl;
    char string[6];
    cin >> string ; 
    cout<< "enter the letters"<<endl;
    cin >> c1 ;
    cin >> c2 ;
    
        replace(string ,c1, c2);
    cout << string ;


    

    
    }