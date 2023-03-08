#include <bits/stdc++.h>
using namespace std;
//successfull
int Sqrt_integer(int n){
    int s = 0;
    int e = n ;
    long int ans  ;

    while( s <= e ) {
  long   int mid = s + (e-s)/2 ;

        if ( mid*mid == n)
        {
            return mid;
             
        }
        if( mid*mid < n) 
        {
            ans = mid ;
            s = mid + 1;
        }
        else 
        {
            e = mid - 1 ;
        }

    
    }
    return ans ;

}

 double MorePrecision( int n , int precision , int temp){
    double factor = 1 ;
    double ans = temp;
    for(int i = 0 ; i < precision ; i++ ){
        factor = factor / 10 ;
        for ( double j = ans ; j*j < n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << " enter the number " << endl ;
    cin >> n ;
    int tempSol = Sqrt_integer(n) ;
    cout << " tempsol is : " << tempSol << endl ;
    cout << " the integer part of the square root of the number is: " << Sqrt_integer(n)<< endl ; 
    cout << " the precised version is : " << MorePrecision( n , 3, tempSol) << endl ;

}