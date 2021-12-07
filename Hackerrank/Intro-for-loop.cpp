                                                        //
                                                        // Created by mustafa on 12/5/21.
                                                        //
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    string names[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i = a; i<=b; i++)
    {
        if(a<=9)
        {
            cout<<names[a]<<"\n";
        }
        else if(a>9)
        {
            if(a%2==0)
            {
                cout<<"even\n";
            }
            else if(a%2!=0)
            {
                cout<<"odd";
            }
        }
        ++a;
    }
    return 0;
}
