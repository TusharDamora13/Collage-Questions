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

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Bubbly(int a[],int n)
{
int i,j;
int flag=0;
for(i=0;i<n-1;i++)
{
for (j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
    {
        swap(&a[j],&a[j+1]);
        flag=1;
    }}
if(flag==0)
{
    cout<<"Array is already sorted"<<endl;
    break;
}
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
    Bubbly(a,n);
    print(a,n);
    return 0;
}