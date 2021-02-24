#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
     for(k= i;k<n;k++)
	cout << " ";
	for(j=0;j<=i;j++)
	cout << "* ";

cout << "\n";
}
return 0;
}
