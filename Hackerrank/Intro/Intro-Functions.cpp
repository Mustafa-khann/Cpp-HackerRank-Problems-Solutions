                                                //
                                                // Created by mustafa on 12/5/21.
                                                //

#include "iostream"
using namespace std;

int highest_of_four(int a, int b, int c, int d)
{
    int highest;
    if(a>b && a>c && a>d){
        highest = a;
    }
    else if(b>a && b>c && b>d)
    {
        highest = b;
    }
    else if(c>a && c>b && c>d)
    {
        highest = c;
    }
    else if(d>a && d>b && d>c)
    {
        highest = d;
    }
    return highest;
}

int main()
{
    int a,b,c,d;
    cout<<"Enter four numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int highest = highest_of_four(a,b,c,d);
    cout<<highest;
    return 0;
}

