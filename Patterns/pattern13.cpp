#include<iostream>
using namespace std;
int main()
{
 int i,j,k,n;
 cin>>n;
 for(i=n;i>=1;i--)
{
for(j=n;j>i;j--)
{
cout<<" ";
}
for(k=1;k<(i*2);k++)
{
cout<<k;
}
cout<<"\n";
}
return 0;
}
