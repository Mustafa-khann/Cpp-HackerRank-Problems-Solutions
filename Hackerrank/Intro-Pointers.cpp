//
// Created by mustafa on 12/6/21.
//

#include "iostream"
#include "stdio.h"
using namespace std;

void update (int *a, int *b)
{
    *a = *a + *b;
    *b = *b - *a;
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<b;
    return 0;
}