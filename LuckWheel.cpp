#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int count_prize,count_man,prizedata,taodata,nowsee=0,nowcount,nowman=0;
	cin>>count_prize;
	cin>>count_man;
	int summan[count_man],prize[count_prize],tao[count_prize];
	for(int i=0;i<count_man;i++)
		{
			summan[i]=0;
		}
	for(int i=0;i<count_prize;i++)
	{
		cin>>prizedata;
		prize[i]=prizedata;
	}
	for(int x=0;x<count_prize;x++)
	{
		cin>>taodata;
		tao[x]=taodata;
	}
	for(int p=0;p<count_prize;p++)
	{
		nowcount=tao[p];
		for(int a=0;a<=nowcount;a++)
		{
			while(prize[nowsee] == 0)
			{
				nowsee++;
				if(nowsee == count_prize)
				{
					nowsee=0;
				}
			}
			if(a==(nowcount))
			{
				summan[nowman] = summan[nowman]+prize[nowsee];
				prize[nowsee] =0;
				nowman++;
			}
			else
			{
				nowsee++;
				if(nowsee == count_prize)
				{
					nowsee=0;
				}
			}
		}
		if(nowman == count_man)
		{
			nowman=0;
		}
	}
	for(int i=0;i<count_man;i++)
		{
			cout<<summan[i]<<endl;
		}
}
