#include<bits/stdc++.h>
using namespace std;

//success
int  length(char a[]){
    int count = 0 ;
    for(int i = 0 ; a[i]!= '\0' ; i++){
        count ++ ;

    }
    return count ; 
}


void reverse(char arr[]){
    int len = length(arr);
    int i = 0 ;
    int j = len - 1;
    while(i< j){
        char t = arr[i] ;
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
      
    }

}

int main(){
    cout<<"enter a string" << endl;
     char string[100];
     cin>>string;
     cout<<" normal string is " << string << endl;
     reverse(string) ;
     cout << "reversed string is " << string ;
}