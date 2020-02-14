#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <math.h>

using namespace std;
vector < pair<double,double> > vec;

int min(int r1,int r2)
{
	if(r1 <= r2)
	{
		return r1;
	}
	else
	{
		return r2;
	}
}

bool placmentX( pair<int, int> p1, pair<int, int> p2)
{

        return (p1.first < p2.first);
}

bool placmentY( pair<int, int> p1, pair<int, int> p2)
{

        return (p1.second < p2.second);
}

int FindClosestPair(int begin,int end)
{
	vector < pair<int,int> > vecY;
	pair <int,int> a;
	int dir,r1,r2,dij;
	int mid=(end+begin)/2;
	//cout<<begin<<" "<<end<<endl;
	if(end-begin == 1)
	{
		dir=pow((vec[end].first-vec[begin].first),2)+pow((vec[end].second-vec[begin].second),2);
		return dir;
	}
	if(end == begin)
	{
		return 100000;
	}
	else
	{
		r1=FindClosestPair(begin,mid);
		r2=FindClosestPair(mid+1,end);
		dir=min(r1,r2);
		for(int i=begin;i<=end;i++)
		{
			dij=vec[i].first-vec[mid+1].first;
			if(dij < 0)
			{
				dij=-dij;
			}
			if(dij <= dir)
			{
				a.first=vec[i].first;
				a.second=vec[i].second;
				vecY.push_back(a);
			}
		}
		sort(vecY.begin(),vecY.end(), placmentY);
		
		for(int i=0;i<vecY.size();i++)
		{
			for(int j=i+1;(j < i+7 && j < vecY.size());j++)
			{
				dij=pow((vecY[i].first-vecY[j].first),2)+pow((vecY[i].second-vecY[j].second),2);
				if(dij < dir)
				{
					dir=dij;
				}
			}
		}
		
		return dir;
	}
}


int main()
{
	int n,one,two,answer=0,fi=0;
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
	sort(vec.begin(), vec.end(), placmentX);

	answer=FindClosestPair(0,n-1);
	
	cout<<answer;
}

