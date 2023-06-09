#include <bits/stdc++.h>
using namespace std;


/*Problem Description:
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Integer N

Output Format :
Integer W

Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7

Sample Input 2 :
5

Sample Output 2 :
13*/

int count(int n){
    if(n == 1 || n == 2){
        return n;
    }
    int r1 = count(n-1);
    int r2 = count(n-2);
    int op = r1+r2 ;

    return op;
}
int main(){
    int n;
    cin >> n ;
    cout<< count(n);
}