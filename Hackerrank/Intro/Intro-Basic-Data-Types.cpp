//
// Created by mustafa on 12/7/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>setprecision(14)>>e;
    cout<<a<<endl<<setprecision(15)<<b<<endl<<c<<endl<<d<<endl;
    cout<<setprecision(50)<<e;
    return 0;
}