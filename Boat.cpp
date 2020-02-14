#include <iostream>
#include <stdio.h>
#include <math.h>
#include <list>
#include <queue>
#include <stack>


using namespace std;



int main()
{
	int count_boat,day,data,iscount,nowcount,w,m;
	stack<int> stack;
	cin>>count_boat;
	cin>>day;
	list<int> listboat[count_boat],listport[count_boat];
	int get[count_boat][day],porthave[count_boat],portis[count_boat];
	int have[count_boat];
	int answerday[count_boat];
	for(int i=0;i<count_boat;i++)
	{
		answerday[i]=0;
		porthave[i]=0;
		portis[i]=-1;
		have[i] =0;
	}

	for(int i=0;i<count_boat;i++)
	{
		stack.push(count_boat-1-i);
		for(int x=0;x<day;x++)
		{
			cin>>data;
			get[i][x]=data;
		}
	}
	
	for(int i=0;i<count_boat;i++)
	{
		for(int x=day-1;x>=0;x--)
		{
			if(get[i][x] !=0)
			{
				listboat[i].push_back(get[i][x]);
			}
		}
	}
	for(int y=0;y<count_boat;y++)
	{
		for(int i=day-1;i>=0;i--)
		{
			if(listport[y].size() == count_boat)
			{
				break;
			}
			for(int x=0;x<count_boat;x++)
			{
				if(get[x][i] == y+1)
				{
					listport[y].push_back(x+1);
					break;
				}
			}
		}
	}

	while(!stack.empty())
	{
		int a = stack.top();
		stack.pop();
		for(list<int>::iterator i = listboat[a].begin(); i != listboat[a].end(); i++)
		{
			w=*i;
			/*cout<<"on"<<endl;
			if(porthave[w-1] == 0) 
			{
				cout<<"a= "<<a<<" portis= "<<portis[w-1]<<endl;
				have[a-1]=w;
				portis[w-1]=a ;
				porthave[w-1] = 1;
				
				break;
			}*/
				nowcount=0;
				for(list<int>::iterator x = listport[w-1].begin(); x != listport[w-1].end(); x++)
				{
					int man=*x-1;
					
					cout<<"a= "<<a<<" man= "<<man<<" portis= "<<portis[w-1]<<endl;
					if(porthave[man] == 0)
					{
						have[a]=w;
						portis[w-1]=man;
						porthave[man]=1;
						nowcount=0;
						break;
					}
					if(man == portis[w-1])
					{
						nowcount = 1;
						break;
					}
					
					else if(man != portis[w-1])
					{
						iscount=0;
						while(iscount==0)
						{
							for(list<int>::iterator d = listboat[man].begin(); d != listboat[man].end(); d++)
							{
								cout<<"hecome "<<endl;
								cout<<"d= "<<*d<<" w= "<<w<<endl;
								if(*d == w)
								{
									portis[w-1] =man;
									have[man]=w;
									stack.push(a);
									cout<<"hahaha"<<endl;
									iscount=1;
									nowcount=0;
									break;
									
								}
								else
								{
									listboat[man].remove(*d);
									listport[*d-1].remove(*d);
									iscount=0;
									nowcount=0;
									break;
								}
							}
						}
					}
					
				}
				if(nowcount==0)
				{
					break;
				}
		}
	}
	for(int a=0;a<count_boat;a++)
	{
		int check=have[a];
		for(int i=0;i<day;i++)
		{
			if(get[a][i] == check)
			{
				answerday[a] = i+1;
			}
		}
	}
	for(int i=0;i<count_boat;i++)
	{
		cout<<answerday[i]<<endl;
	}
}

