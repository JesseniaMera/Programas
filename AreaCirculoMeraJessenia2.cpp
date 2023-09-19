#include<iostream>
using namespace std; 
#define pi 3.1416
float AreaCirculo (float);
int main ()
{
	float a,r;
	cout<<"ingrese el radio :";
	cin>>r;
	a=AreaCirculo(r);
	cout<<"El area es :";
	cout<<a;
	return (0);
}
float AreaCirculo (float x)
{
	return pi*x*x;
}

