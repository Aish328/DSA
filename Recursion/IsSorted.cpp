#include<bits/stdc++.h>
using namespace std;
//success
bool isSorted(int a[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[0]>a[1]){
        return false ;
    }
    bool sort = isSorted(a+1 , n-1);
    return sort;
}

int main(){
    int arr[] = { 1,2,3,4,5};
    cout << isSorted(arr , 6);

}