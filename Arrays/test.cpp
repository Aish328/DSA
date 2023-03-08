#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> vim , int n){
    int s = 0;
    int e = n-1;
        int    mid = s + (e-s)/2;
   
    while( s < e){
        if(vim[mid] >= vim[0]){
            s = mid + 1;

        }
        else{
            e = mid ;
    }
        mid = s + ( e-s)/2 ;

    }
    return e;
}
int main(){
    vector<int> v;
   
   
        v.push_back(15);
        v.push_back(18);
        v.push_back(21);
        v.push_back(29);
        v.push_back(35);
        v.push_back(44);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);


        int n = v.size();
        cout<< " the size is  " << n << endl;
        cout << " the pivot element is at index " << getPivot(v,n) << endl;
    
    return 0; 
}