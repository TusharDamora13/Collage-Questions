#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void insertion(int a[],int n)
{
int i;
int j,x;
for(i=1;i<n;i++)
{
j=i-1;
x=a[i];
while(j>=0&&a[j]>x)
{
    a[j+1]=a[j];
    j--;
}
a[j+1]=x;
}
}


int main()
{
    int i;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
    print(a,n);
    return 0;
}