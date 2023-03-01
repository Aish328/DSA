#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
     int e= n-1, s=0;
    int mid = s- (e-s)/2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid-1;

        }
        mid= s+(e-s)/2;

        }
        return e;
    }

int main(){
    int num[]={7,8,9,11,2,3};
    cout << "pivot element of the sorted array is at index : "<< getpivot(num,6)<<endl;
    return 0; 
}