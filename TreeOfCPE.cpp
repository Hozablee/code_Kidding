#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool placment( pair<string, string> p1, pair<string, string> p2)
{

        return (p1.first < p2.first);
}



int main()
{
	int run;
	string nod="test",pie,line;
	vector < pair<string,string> > vec;
	vector < pair<string,int> > tree;
	pair<string,string> data;
	pair<string,int> treeline;
	
	
	cin>>line;
	treeline.first = line;
	treeline.second = 0;
	tree.push_back(treeline);
	while(1)
	{
		cin>>nod;
		cin>>pie;
		if(nod == "#" && pie == "#")
		{
			break;
		}
		data.first=nod;
		data.second=pie;
		vec.push_back(data);
	}
	
	sort(vec.begin(),vec.end(),placment);
	
	cout<<line<<endl;
	run=tree[0].second;
	for(int i=0;i<tree.size();i++)
	{
		if(run != tree[i].second)
		{
			cout<<endl;
			run=tree[i].second;
		}
		pie=tree[i].first;
		
		for(int j=0;j<vec.size();j++)
		{
			if(vec[j].second == pie)
			{
				treeline.first = vec[j].first;
				treeline.second = run+1;
				cout<<"("<<vec[j].second<<")"<<vec[j].first<<" ";
				tree.push_back(treeline);
			}
		}
	}
	
	
	
	
}

