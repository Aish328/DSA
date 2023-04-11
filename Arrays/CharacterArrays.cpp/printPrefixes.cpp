#include<bits/stdc++.h>
using namespace std;
//success




void prefix(char arr[]){
   
   
    for(int i = 0 ; arr[i]!= '\0' ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout << arr[j];
        }
        cout<< endl;
    }
    }


int main(){
    char str[100];
    cout<<"enter the string " << endl ;
    
    cin >> str ;
    cout<< "the prefixes are : "<< str <<endl; 

    prefix(str) ;
  
    }