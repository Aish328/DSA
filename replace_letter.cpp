#include<bits/stdc++.h>
using namespace std;

bool replace(char arr[100], char b){
    for(int i = 0 ; arr[i] != '/0' ; i++){
        arr[i] == b;
    }
}

int main(){
    char word[100];
    cin >> word ;
    char a;
    char c;
    cout << " enter the element to be replaced : " ;
    cin >> c ;
    cout<< "enter the element with which to be replaced letter: " << endl;
    cin >> a; 
    for(int i = 0 ; word[i] != '\0' ; i++){
    if (replace(word,c) == true){
        word[c]= a ;


    }
    return word[100] ;
    }
    cout<< "the updated word is : " << word ; 
   return 0;
     
}