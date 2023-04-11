#include<bits/stdc++.h>
using namespace std;
//success 
int length(char a[]){
    int count = 0 ;
    for(int i = 0 ; a[i] != '\0'; i++){
        count ++;
    } 
    return count;

}




void prefix(char arr[]){
    int len = length(arr);
    for(int k = 0 ; arr[k]!= '\0' ; k++){
    for(int i = k ; arr[i]!= '\0' ; i++){
        for(int j = k ; j<=i ; j++){
            cout << arr[j];
        }
        cout<< endl;
    }
    }
}

int main(){
    char str[100];
    cout<<"enter the string " << endl ;
    cin >> str ;
    prefix(str);
    cout<< "the prefixes are : " << str <<endl; 

    }