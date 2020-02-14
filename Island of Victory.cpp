#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	char data;
	int n,intdata,count=0,row=0,col=0,now=0,sum,time,push,rowf,colf,exit=0;;
	int set[150][150];
	cin>>n;
	while(count < n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>data;
			intdata=data;
			set[count][i]=intdata-48;
		}
		count++;
	}
	for(int i=0;i<n;i++)
	{
		for(int x=0;x<n;x++)
		{
			sum=0;
			exit=1;
			if(set[i][x] != 0)
			{
				sum=1;
				push=1;
				//cout<<"1"<<endl;
				if(sum > now)
				{
					now=sum;
					row=i+1;
					col=x+1;
					//cout<<"2"<<endl;	
				}
				while(1)
				{
					//cout<<"3"<<endl;
					rowf=i+push;
					colf=x+push;
					if((rowf>=n) || (colf>=n))
					{
						//cout<<"4"<<endl;
						break;
					}
					push++;
					time=push*push;
					//cout<<"5"<<endl;
					for(int a=x;a<=colf;a++)
					{
						/*cout<<"6"<<endl;
						cout<<"a="<<a<<endl;
						cout<<"rowf="<<rowf<<endl;
						cout<<"set[rowf][a] = "<<set[rowf][a]<<endl;*/
						if(set[rowf][a]!=0)
						{
							sum++;
						//	cout<<"7"<<endl;
						}
						else
						{
						//	cout<<"8"<<endl;
							exit=0;
							break;
						}
					}
					if(exit==0)
					{
					//	cout<<"9"<<endl;
						break;
					}
					for(int b=i;b<=rowf;b++)
					{
					//	cout<<"set[b][colf] = "<<set[b][colf]<<endl;
					//	cout<<"10"<<endl;
						if(set[b][colf]!=0)
						{
						//	cout<<"11"<<endl;
							sum++;
						}
						else
						{
						//	cout<<"12"<<endl;
							exit=0;
							break;
						}
					}
					sum--;
					if((sum>now ) && (sum==time))
					{
						now=sum;
						row=i+1;
						col=x+1;
					}
				}
			}	
		}

	}
	cout<<row<<" "<<col<<endl;
	cout<<now;	
}

2
8 8
6 2
2 7
2 3
8 1
5 4
4 3
7 1
6 8
5 0

