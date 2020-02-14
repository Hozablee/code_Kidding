#include <iostream>
#include <stdio.h>
#include <list>
#include <utility>
#include <queue>

using namespace std;

int *test(int ha[])
{
	static int check[10];
	cout<<ha[1];
	return ha;
}

int main()
{
	int yeah[10];
	int *solo;
	for(int i = 0 ;i<10;i++)
	{
		yeah[i]=i;
	}
	solo=test(yeah);
	
	for(int i = 0 ;i<10;i++)
	{
		cout<<solo[i]<<endl;
		solo[i]=15;
	}
	test(solo);
	
}

