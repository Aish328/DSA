#include<bits/stdc++.h>
using namespace std;
/*Given a 2D array, print it in spiral form.

Examples: 

Input:  {{1,    2,   3,   4},
              {5,    6,   7,   8},
             {9,   10,  11,  12},
            {13,  14,  15,  16 }}
Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 */
//success

int spiral(int arr[4][4], int m , int n ){//m-->number of rows, n --> no of columns
int rs = 0 , re = m - 1;
int cs = 0 , ce = n - 1;
while(rs<= re && cs <= ce){
    for(int i = cs ; i<= ce ; i++ ){
        cout << arr[rs][i] << " ";
    }
    
    rs++ ;
    for(int i = rs ; i <= re ; i++){
        cout<< arr[i][ce]<< " ";

    }
    
    ce--;
    
    if(rs <= re){
        for(int i = ce; i>= cs ; i--){
            cout<<arr[re][i] << " ";
        }
      
        re--;

    }
    if(cs<= ce){
        for(int i = re ; i >= rs ; i--){
            cout<<arr[i][cs] << " ";
        } 
        
        cs++ ;
    }
    }  
return arr[4][4];
}

int main(){
    int a[4][4] =  {{1,    2,   3,   4},
               {5,    6,   7,   8},
               {9,   10,  11,  12},
               {13,  14,  15,  16 }}  ;
    cout<< spiral(a , 4 , 4);

}