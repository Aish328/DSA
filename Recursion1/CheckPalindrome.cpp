#include<bits/stdc++.h>
using namespace std;

//success

/*Problem Description:
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false
*/

int checkPalindrome(char s[], int i , int l){
    if(i <= l){
        i++; //base condition
        l--;
        return checkPalindrome(s,i,l); //recursive call
    }
    if(i == l){                        
        return 1;
    }
    if(s[i] != s[l]){
        return 0;
    }
    return 1;
}
int main(){
    int result ;
    char str[10] = "train" ;
    int length = strlen(str);
    if(length == 0 ){
        result = 1;
    }
    else{
    result = checkPalindrome(str , 0 , length-1 );
}
if(result == 1){
    cout << "true";

}
else{
    cout << "false";
}
}