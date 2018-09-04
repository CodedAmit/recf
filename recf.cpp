#include<iostream>
using namespace std;
int fact(int);
void main()
{
int n,f;
cout<<"enter the number";
cin>>n;
f=fact(n);
cout<<"factorial of"<<n<<"is"<<f;
}
int fact (int n)
{
if(n==0||n==1)
return 1;
else
return (n*fact(n-1));
}
