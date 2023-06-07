#include<bits/stdc++.h>
using namespace std;
/*Problem Statement: Quick Sort
Problem Level: MEDIUM
Problem Description:
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
<br>
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8

Sample Input 2 :
5
1 5 2 7 3

Sample Output 2 :
1 2 3 5 7

@csalgo*/

// void swap(int a , int b){
// /    int t;
//     t = a; 
//     a = b;
//     b = t;
// int temp;   
//     temp = a;
//     a = b;
//     b = temp;
// }

// int partition(int a[], int s , int e){
//     int mid = s +(e-s)/2;
//     swap(a[s] , a[mid]);
//     if(a[s] < a[mid]){
//         s++;
//     }
//     else if( a[e] > a[mid]){
//         e--;
//     }
//     else{
//         swap(a[s], a[e]);
//     }
//     return 

// }

int partition(int arr[], int start, int end)
{
 
    int m = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= m)
            count++;
    }
    // pivot = m , pivotelement = n 
 
    // Giving pivot element its correct position
    int n = start + count;
    swap(arr[n], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < n && j > n) {
 
        while (arr[i] <= m) {
            i++;
        }
 
        while (arr[j] > m) {
            j--;
        }
 
        if (i < n && j > n) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return n;
}
void quicksort(int arr[],int s, int e)
{
    if(s >= e){
        return;
    }
   
    int c = partition(arr, s , e);
    quicksort(arr, s , c-1);
    quicksort(arr, c+1 , e);
}

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