#include<bits/stdc++.h>
using namespace std;

//success
void print(vector<int> vim){
    for(int i = 0 ; i< vim.size() ; i++){
        cout<< vim[i] << " " ;
    }
    cout << endl ;
}


vector<int> reverse(vector<int> v){
    int s = 0 ;
    int e = v.size() -1 ;
    
    while(s<=e){
       // int temp;
        //  v[e] = temp ;
        //  v[s] = v[e];
        //  temp = v[s] ;
        swap(v[s],v[e]) ;

         s++;
         e--;
    }
return v;

}

 
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    print(arr);
    vector<int> rev = reverse(arr);
    print(rev);

    return 0 ;

}