#include <bits/stdc++.h>
using namespace std;

int length(char str[]){
    if(str[0] == '\0'){
        return 0 ;
    }
    
        int ans = length(str+1);
    return 1 + ans ;
}


int main(){
    char s[] = " Aish";
    cout << " the length of string is : " << length(s);
}