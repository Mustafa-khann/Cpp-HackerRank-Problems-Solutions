                                               //
                                               // Created by mustafa on 12/6/21.
                                               //
#include "iostream"
using namespace std;

void update (int *a, int *b)
{
    int ab = *a;
    *a = *a + *b;
    *b = abs(*b - ab);
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<"\n"<<b;
    return 0;
}