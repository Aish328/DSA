#include <bits/stdc++.h>
using namespace std;

/*Problem Statement: Remove Duplicates 
Problem Level: EASY
Problem Description:
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S

Output Format :
Output string

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string

Sample Input 1 :
aabccba

Sample Output 1 :

abcba

Sample Input 2 :
xxxyyyzwwzzz

Sample Output 2 :
xyzwz
*/

void Remove(char c[]){
    if(c[0] == '\0'){
        return ;
    }
    for(int i = 0 ; c[i] != '\0' ; i++){
        if(c[i] == c[i+1]){
            c[i+1] = c[i+2];
        }
        Remove(c+1);
    }
}

int main(){
    char s[] = " aabccba";
    Remove(s);
    cout<< s;
}