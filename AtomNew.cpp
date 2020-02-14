#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long int n,first,second,power,nowpower,allpower,a,check;
	long int data;
	long int atom[1000];
	while(1)
	{
		check=0;
		allpower=0;
		a=0;
		cin>>n;
		if(n == 0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			cin>>data;
			atom[i] = data;
		}
		
		while(n !=check && n-1 != check)
		{
			first =-1;
			second=-1;
			power=-1;
			for(int i=0;i<n-1;i++)
			{
				if(atom[i] != 0)
				{
					a=i+1;
					while(atom[a] == 0 && a < n-1)
					{
						a++;
						//cout<<a<<" and "<<atom.size()<<endl;
					}
					//cout<<"atom"<<i<<" = "<<atom[i]<<endl;
				//	cout<<"atom"<<a<<" = "<<atom[a]<<endl;
					nowpower=atom[i]-atom[a];
					//cout<<"nowpower="<<nowpower<<endl;
					if(nowpower < 0)
					{
						nowpower=-nowpower;
						//cout<<"nowpowerin="<<nowpower<<endl;
					}
					
					if(nowpower > power && atom[a] > 0)
					{
						first=i;
						second=a;
						power=nowpower;
						//cout<<"i do"<<" "<<nowpower<<endl;
					}
				}
			}
			if(atom[first] > 0 && atom[second] > 0)
			{
				allpower+=power;
				//cout<<"atom"<<atom[first]<<"= 0"<<endl;
				//cout<<"atom"<<atom[second]<<"= 0"<<endl;
				
				atom[first]=0;
				atom[second]=0;
				check+=2;
				
				while(first > 0  && second < n-1) 
				{
					if(atom[first] == 0)
					{
						first-=1;
					}
					if(atom[second] == 0)
					{
						second+=1;
					}
					if(atom[first] != 0 && atom[second] != 0)
					{
						nowpower=atom[first]-atom[second];
						if(nowpower < 0)
						{
							nowpower=-nowpower;
						}
						allpower+=nowpower;
						atom[first]=0;
						atom[second]=0;
						check+=2;
					}
				}
			}
		}
		cout<<allpower<<endl;
	}
	
	
	
	
	
}
