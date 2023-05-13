#include<bits/stdc++.h>
using namespace std;

//success

/*Problem Statement: Replace pi (recursive)
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p
*/

// void replacepihelper(char s[] , int i){
//     if ( s[i] == '\0' || s[i+1] == '\0'){       //base condition
//         return;
//     }
//     replacepihelper(s,i+1);                     //recursive call
//     if(s[i] == 'p' && s[i+1] == 'i'){           //CALCULATION
//         for(int i = strlen(s) ; i >= i+2 ; i--){
//             s[i+2] == s[i];                     //shifting two places to right to accumalate 3.14 at starting

//         }
//         s[i] = '3';                                 //putting in first values as 3.14
//         s[i+1] = '.';
//         s[i+2] = '1';
//         s[i+3] = '4';

//     }
// }

//     void replacepi(char str[]){
//         replacepihelper(str,0);
//     }

//     int main(){
//         char a[] = "xpix";
//         replacepi(a);
//         cout << a;
//         return 0 ;

//     }
//from here

string replacePI(string s){
    if(s.length() ==0 || s.length() == 1 ){
        return s;
    }
    if(s[0] == 'p' && s[1]== 'i')
    {
        string ans = replacePI(s.substr(2));
        return "3.14" + ans ;
    }
    else{
        return s[0]+ replacePI(s.substr(1));
    }
}

  int main(){
         char a[] = "xpix";

         
         cout << replacePI(a);
         return 0 ;

     }
