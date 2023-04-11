#include<bits/stdc++.h>
using namespace std;

int length(char a[]){
    int count = 0 ; 
    for(int i = 0 ; a[i]!= '\0' ; i++){
        count ++;

    }
    return count ;

}
//success
//l= leftmost index    r = rightmost index
void reverse(char arr[], int l , int r){
    // l = 0 ; 
    //  r = length(arr) - 1;
    while(l<r){
        char t = arr[l];
        arr[l] = arr[r];
        arr[r] = t ;
        l++;
        r--;
    }
    }
// int main(){
//     char str[100];
//     cout<<"enter a string" << endl ;
//     cin.getline(str,100);
//     int l = 0 ; 
//     int n = length(str) - 1 ;
//     reverse(str, 0 , n);
//     cout << "reversed : " << str << endl;
//     while(l<n){
//         int r = l ;
//         while(str[r] != '\0' && str[r] != ' '){
//             r++;
//         }
//         r--;
//         reverse(str , l , r);
//         l = r+2 ;
//     }
//     cout << str << endl;

    // cout<<"actual string is :"<< str << endl ;
    // reverse(str);
    // cout<<"reversed : " <<str << endl ;
    // int i = 0 ;
    // int j = length(str) - 1;
    // while(str[i] != ' '){
    //     reverse(str);
    //     i++;
        
    // }
    // cout<< "final : " << str <<  endl;

// }

int main(){
    char str[] = "i am Aishanya";
    int l = 0 ; 
    int n = length(str)- 1;
    reverse(str , 0 , n);
    while(l<=n){
        int r  = l ;
        while(str[r]!= ' ' && str[r]!= '\0')
        {
            r++;
        }
        r--;
        reverse(str , l , r);
        l = r+2 ;
    }
    cout<<str << endl;
    }