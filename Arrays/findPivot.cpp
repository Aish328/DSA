#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int> array, int n){
     int e= n-1, s=0;
    int mid = 0;
    while(s<e){
        mid= s+(e-s)/2;
        
        if(array[mid]>=array[0]){
            s=mid+1;
        }
        else{
            e=mid;

        }
        

        }
        return e;

}
int main(){
    //int num[]={7,8,9,11,2,3};
    //cout<<"hello";
     vector<int> nums ;
     nums.push_back(7); 
     nums.push_back(8);
     nums.push_back(9);
     nums.push_back(11);
     nums.push_back(3);
     nums.push_back(4);
     

     int n = nums.size(); /*size being used in a vector*/
/*size is a fxn of class :vector */
cout<< "size is " << n;
    cout << "pivot element of the sorted array is at index : "<< getPivot(nums,n)<<endl;
    return 0; 
}