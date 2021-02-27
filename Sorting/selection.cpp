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

void selection(int a[],int n)
{
int i,j;
int min;
for(i=0;i<n-1;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
            if(a[j]<a[min])
            {
                min=j;
            }}
         swaped(&a[i],&a[min]);
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
    selection(a,n);
    print(a,n);
    return 0;
}