#include<iostream>
using namespace std;

void countInv(int a[],int n)
{
    int i,j;
    int c=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j] && i<j)
            {
                c++;
            }
        }
    }
    cout<<c;
}

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countInv(a,n);
    return 0;
}