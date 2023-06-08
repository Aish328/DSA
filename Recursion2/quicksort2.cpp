#include <bits/stdc++.h>
using namespace std;

int partition(int a[] ,int s , int e)
{
  int pivot = a[s];
  int i = s ; 
  int j = e ;
  while(i < j ){
    while(a[i] <= pivot ){
      i++;
    }
    while(a[j] >  pivot ){
      j--;
    }
    if(i<j){
      swap(a[i], a[j]);

    }
  }
  swap(a[j] , a[s] );
  return j ; 

}
void quicksort(int a[], int s , int e){
  if(s >= e){
    return ;
  }
  int c = partition(a, s ,e);
  quicksort(a , s ,  c-1);
  quicksort(a, c+1 , e);
}

// int main(){
//   int a[] = {6,3,9,5,2,8,7};
//   quicksort(a, 0 , 6);
//   for(int i = 0; i<= 6 ; i++){
//     cout << a[i] << " ";

//   }
// }
int main()
  {
    int n ;
    cout << "enter number of elements";
    cin>>n;
    int a[]= {1, 5, 2, 7, 3};
    quicksort(a,0,4);
    for(int i = 0 ; i<= n-1 ; i++){
        cout << a[i] << " " ;
        }
    return 0;
}
