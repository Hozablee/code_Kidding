#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{
	int n;
	cin>>n;
	if(n % 7 == 1)
	{
		cout<<"C";
	}
	else if(n % 7 == 2)
	{
		cout<<"D";
	}
	else if(n % 7 == 3)
	{
		cout<<"E";
	}
	else if(n % 7 == 4)
	{
		cout<<"F";
	}
	else if(n % 7 == 5)
	{
		cout<<"G";
	}
	else if(n % 7 == 6)
	{
		cout<<"A";
	}
	else if(n % 7 == 0)
	{
		cout<<"B";
	}
}

