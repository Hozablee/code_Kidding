#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool placment( pair<int, int> p1, pair<int, int> p2)
{

        return (p1.first < p2.first);
}

int main()
{
	int n,one,two,answer=0,fi=0;
	vector < pair<int,int> > vec,vecx;
	pair<int,int> san;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>one;
		cin>>two;
		
		san.first=one;
		san.second=two;
		vec.push_back(san);
	}
	vecx=vec;
	sort(vecx.begin(), vecx.end(), placment);
	 
	
cout<<"srot law na"<<endl;	
	for(int i=0;i<n;i++)
	{
		cout<<vecx[i].first<<" "<<vecx[i].second<<endl;
	}
}

