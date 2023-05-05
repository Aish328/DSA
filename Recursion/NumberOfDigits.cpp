#include<bits/stdc++.h>
using namespace std;

int count(int n){
   
    // if(n>0){
    //     c++;
    //     count(n/10);
    // }
    if(n==0){
        return 0;
    }
    
    return 1+count(n/10);
    
    // else{
    //     count(n/10);
    //     c++;

    // }
   
}

int main(){
    int num ;
    cin >> num ;
    cout << count(num); 
}