#include <bits/stdc++.h>
using namespace std;

void medians(int a[],int n)
{
sort(a,a+n);
if(n%2!=0)
{
 cout<<a[n/2];   
}
else{
    cout<<(a[n/2]+((a[n/2]+1)/2))/2;
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
    medians(a,n);
}