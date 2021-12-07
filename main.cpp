                                               //
                                               // Created by mustafa on 12/6/21.
                                               //
#include "iostream"
using namespace std;

void update (long *a, long *b)
{
    int ab = *a;
    *a = *a + *b;
    if(*a>=3514)
    {
        *b = ab - *b;
    }
    else if(*a>=52185757 && *b>=83911388)
    {
        *b = ab - *b  ;
    }
    else
    {
        *b = *b - ab;
    }


}
int main()
{
    long a, b;
    long *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<"\n"<<b;
    return 0;
}