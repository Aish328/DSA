#include <iostream>
using namespace std;
 
// int length(int a[], int s, int l)
// {
//     int count = 0;
//     while (s <= l)
//     {
//         count++;
//         s++;
//     }
//     return count;
// }
 
void merge(int arr[], int s, int mid, int l)
{
    int i = s, j = mid + 1, k = 0;
    int temp[100] = {0};
    while (i <= mid && j <= l)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
 
    //copy first array k element
    while (i <= mid)
    {
        temp[k++] = arr[i++];
        //copying second array k remaining element
    }
    while (j <= l)
    {
        temp[k++] = arr[j++];
    }
 
    k = 0;
    for(int x = s; x <= l; x++){
        arr[x] = temp[k++];
    }
}
 
void mergesort(int a[], int s, int l)
{
    if (a[s] >= a[l])
    {
        return;
    }
    int mid = s + (l - s) / 2;
    mergesort(a, s, mid);  // s to mid
    mergesort(a, mid + 1, l); // mid + 1 to l
    merge(a, s, mid, l); // 
}
 
int main()
{
    //         0  1  2  3  4  5  6
    int z[] = {3, 6, 7, 9, 2, 5, 7};
    mergesort(z, 0, 6);
    for(int i = 0; i < 7; i++){
        cout << z[i] << " ";
    }
}


