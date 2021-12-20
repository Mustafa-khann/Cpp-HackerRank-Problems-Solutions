#include "iostream"
using namespace std;

int main() {
    int x,y,s=0;
    cin>>x>>y;
    int* array[x];
    while(x--)
    {
        int n;
        cin>>n;
        array[s] = new int[n];
        for(int i =0; i<n; i++)
        {
            cin>>array[s][i];
        }
        s++;
    }
    while (y--)
    {
        int a,b;
        cin>>a>>b;

        cout<<array[a][b]<<endl;
    }
    return  0;
}