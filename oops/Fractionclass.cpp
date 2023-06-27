#include<bits/stdc++.h>
using namespace std;

class fraction{
    private:
    int numerator;
    int denominator;
    public:
    fraction(int numerator , int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    void print(){
        cout << this -> numerator << "/" << denominator << endl;
    }

    void simplify(){
        int gcd = 1 ;
        int j = min(this ->numerator , denominator);
        for(int i = 0 ; i <= j; i ++ ){
            if(this -> numerator% i == 0 && this -> denominator%i == 0){
                gcd = i ;
            }
        }
        this -> numerator= numerator/gcd;
        this -> denominator = denominator/gcd ;
    }
    void add(fraction f2){
        int lcm = this -> denominator*f2.denominator;
        int x = lcm/ denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + (y * f2.numerator);

        numerator = num ;
        denominator= lcm ;
    }
};