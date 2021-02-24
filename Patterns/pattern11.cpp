#include<iostream>
using namespace std;
int main()
{
int n,k,i,j;
cin >> n;
for(i = n; i >= 1; i--)
{
for(k=i;k<n;k++)
cout << " ";
for(j = 1; j <= i; j++)
cout << "* ";
cout << "\n";
}
return 0;
}
