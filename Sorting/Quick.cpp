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

void swaped(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int part(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    int j=l;
    for(j=l;j<=h-1;j++)
    {
            if(a[j]<pivot)
        {
                i++;
                swaped(&a[i],&a[j]);
            }}
    
    swaped(&a[i+1],&a[h]);
    return i+1;
}

void qSort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=part(a,l,h);
        qSort(a,l,p-1);
        qSort(a,p+1,h);
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
   qSort(a,0,n-1);
    print(a,n);
    return 0;
}