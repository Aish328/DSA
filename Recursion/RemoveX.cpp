#include<bits/stdc++.h>
using namespace std;

//reconsider

/*Problem Statement: Remove X
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:
*/


// void removeX(char input[]) {
//     if (input[0] == '\0')
//         return;

//     removeX(input+1);

//     if (input[0] == 'x') {              // HEAD RECURSION
//         strcpy(input, input+1);
//        removeX(input);         
//     }

// }

void removeX(char input[]) {
    if (input[0] == '\0')
        return;

    if (input[0] == 'x') {                      //TAIL RECURSION
        strcpy(input, input+1);
        removeX(input);
    }

    removeX(input+1);
}

int main(){
    char s[] = "nxxgfxgh";
    removeX(s);
    cout << s;
}