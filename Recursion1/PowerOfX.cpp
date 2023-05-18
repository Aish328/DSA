#include<bits/stdc++.h>
using namespace std;
//success

int pow(int x , int n){
    if(n == 0){
        return 1 ;
    }
    
   else{ return   x*pow(x,n-1);}

   
}
int main(){
     int n , x ;
      cin >> x >> n ;
      cout << pow(x,n); 
      return 0;
}
/*optimal approach:
int pow(int x , int  n){
    if(n==0){
        return 1;
    }
    else id(n%2 == 0){
        return x*pow(x,n/2);                (for even n)

    }
    else (
        return x*pow(x,(n-1)/2);            (for odd n)
    )
}*/ 