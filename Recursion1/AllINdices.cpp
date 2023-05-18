#include<bits/stdc++.h>
using namespace std;

void print_all_indices(int a[], int n, int K)
{
    int count_smaller = 0;
    int count_k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < K)
            count_smaller++;
        if (a[i] == K)
            count_k++;
    }

    for (int i = 0; i < count_k; i++)
    {
        cout << count_smaller << " ";
        count_smaller++;
    }
}

int main()
{
    int a[] = {3, 5, 7, 9, 7, 2, 7};

    int K = 7;

    int n = sizeof(a) / sizeof(a[0]);

    print_all_indices(a, n, K);
    
    return 0;
}
