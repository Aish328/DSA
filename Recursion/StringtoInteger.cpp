#include<bits/stdc++.h>
using namespace std;

//success

// Problem Description:
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")

// Output format :
// Corresponding integer N (int, Eg. 1234)

// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.

// Sample Input 1 :
// 1231

// Sample Output 1 :
// 1231

// Sample Input 2 :
// 12567

// Sample Output 2 :
// 12567


int conv( char str[]){
    if(strlen(str) == 1){
        int a = str[0];
        return a - '0';
    }
    int ans = conv(str+1);
    int a = str[0];
    return (a-'0')* pow(10,strlen(str)-1) + ans;
}

int main(){
    char s[] = "7654";
    cout << conv(s);
}