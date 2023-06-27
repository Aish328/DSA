#include<bits/stdc++.h>
using namespace std;
#include "Fractionclass.cpp"

int main(void) {
    fraction f2(35,5);
    fraction f3(23,7);
    f2.add(f3);
    f2.print();
    f3.print();
    return 0;
}