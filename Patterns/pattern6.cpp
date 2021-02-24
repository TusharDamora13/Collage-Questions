#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}