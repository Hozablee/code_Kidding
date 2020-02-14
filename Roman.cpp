#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string data;
	cin>>data;
	int check,stage=0;
	int M=0,D=0,C=0,L=0,X=0,V=0,I=0;
	
	
	for(int i=0;i<data.size();i++)
	{
		check=data[i];
	//	cout<<"check = "<<check<<endl;
		//cout<<"stage = "<<stage<<endl;
		if(stage == 0)
		{
			if(check >= 48 && check <= 57)
			{
				stage = 1;
			}
			else
			{
				stage = 2;
			}
		}
		else if(stage == 1)
		{
			if(check >= 48 && check <= 57)
			{
				stage = 1;
			}
			else
			{
				stage =10;
				break;
			}
		}
		else if(stage == 2)
		{
			if(check >= 48 && check <= 57)
			{
				stage =10;
				break;
			}
			else if(data[i] == 'M')
			{
				M++;
				if(M > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'D' || data[i-1] == 'C' ||data[i-1] == 'L' ||data[i-1] == 'X' ||data[i-1] == 'V' ||data[i-1] == 'I')
					{
						if(data[i-2] == 'D' || data[i-2] == 'C' ||data[i-2] == 'L' ||data[i-2] == 'X' ||data[i-2] == 'V' ||data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'D')
			{
				D++;
				if(D > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'C' ||data[i-1] == 'L' ||data[i-1] == 'X' ||data[i-1] == 'V' ||data[i-1] == 'I')
					{
						if(data[i-2] == 'C' ||data[i-2] == 'L' ||data[i-2] == 'X' ||data[i-2] == 'V' ||data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'C')
			{
				C++;
				if(C > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'L' ||data[i-1] == 'X' ||data[i-1] == 'V' ||data[i-1] == 'I')
					{
						if(data[i-2] == 'L' ||data[i-2] == 'X' ||data[i-2] == 'V' ||data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'L')
			{
				L++;
				if(L > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'X' ||data[i-1] == 'V' ||data[i-1] == 'I')
					{
						if(data[i-2] == 'X' ||data[i-2] == 'V' ||data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'X')
			{
				X++;
				if(X > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'V' ||data[i-1] == 'I')
					{
						if(data[i-2] == 'V' ||data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'V')
			{
				V++;
				if(V > 3)
				{
					stage = 10;
					break;
				}
				if(i > 1)
				{
					if(data[i-1] == 'I')
					{
						if(data[i-2] == 'I')
						{
							stage=10;
							break;
						}
					}
				}
			}
			else if(data[i] == 'I')
			{
				I++;
				if(I > 3)
				{
					stage = 10;
					break;
				}
			}
		}
	}
	
	if(stage == 10)
	{
		cout<<"Error";
	}
	else if(stage == 1)
	{
		int intdata=0;
		int change;
		int doit=data.size()-1;
		for(int i=0;i<data.size();i++)
		{
			change=data[i]-48;
			if(doit == 3)
			{
				intdata+=1000*change;
			}
			else if(doit == 2)
			{
				intdata+=100*change;
			}
			else if(doit == 1)
			{
				intdata+=10*change;
			}
			else if(doit == 0)
			{
				intdata+=1*change;
			}
			doit--;
		}
		
		while(intdata != 0)
		{
			if(intdata/1000 > 0)
			{
				int for1000=intdata/1000;
				for(int i=for1000;i>0;i--)
				{
					cout<<'M';
				}
				intdata-=1000*for1000;
			}
			else if(intdata >= 900)
			{
				cout<<"CM";
				intdata-=900;
			}
			else if(intdata >= 500)
			{
				cout<<'D';
				intdata-=500;
			}
			else if(intdata >= 400)
			{
				cout<<"CD";
				intdata-=400;
			}
			else if(intdata >= 100)
			{
				cout<<'C';
				intdata-=100;
			}
			else if(intdata >= 90)
			{
				cout<<"XC";
				intdata-=90;
			}
			else if(intdata >= 50)
			{
				cout<<'L';
				intdata-=50;
			}
			else if(intdata >= 40)
			{
				cout<<"XL";
				intdata-=40;
			}
			else if(intdata >= 10)
			{
				cout<<'X';
				intdata-=10;
			}
			else if(intdata >= 9)
			{
				cout<<"IX";
				intdata-=9;
			}
			else if(intdata >= 5)
			{
				cout<<'V';
				intdata-=5;
			}
			else if(intdata >= 4)
			{
				cout<<"IV";
				intdata-=4;
			}
			else if(intdata >= 1)
			{
				cout<<"I";
				intdata-=1;
			}
		}
	}
	else if(stage == 2)
	{
		int sum=0;
		for(int i=0;i<data.size();i++)
		{
			if(i == data.size()-1)
			{
				if(data[i] == 'M')
				{
					sum+=1000;
				}
				else if(data[i] == 'D')
				{
					sum+=500;
				}
				else if(data[i] == 'C')
				{
					sum+=100;
				}
				else if(data[i] == 'L')
				{
					sum+=50;
				}
				else if(data[i] == 'X')
				{
					sum+=10;
				}
				else if(data[i] == 'V')
				{
					sum+=5;
				}
				else if(data[i] == 'I')
				{
					sum+=1;
				}
			}
			else
			{
				if(data[i] == 'I')
				{
					if(data[i+1] == 'M')
					{
						sum+=1000-1;
						i++;
					}
					else if(data[i+1] == 'D')
					{
						sum+=500-1;
						i++;
					}
					else if(data[i+1] == 'C')
					{
						sum+=100-1;
						i++;
					}
					else if(data[i+1] == 'L')
					{
						sum+=50-1;
						i++;
					}
					else if(data[i+1] == 'X')
					{
						sum+=10-1;
						i++;
					}
					else if(data[i+1] == 'V')
					{
						sum+=5-1;
						i++;
					}
					else
					{
						sum+=1;
					}
				}
				else if(data[i] == 'V')
				{
					if(data[i+1] == 'M')
					{
						sum+=1000-5;
						i++;
					}
					else if(data[i+1] == 'D')
					{
						sum+=500-5;
						i++;
					}
					else if(data[i+1] == 'C')
					{
						sum+=100-5;
						i++;
					}
					else if(data[i+1] == 'L')
					{
						sum+=50-5;
						i++;
					}
					else if(data[i+1] == 'X')
					{
						sum+=10-5;
						i++;
					}
					else
					{
						sum+=5;
					}
				}
				else if(data[i] == 'X')
				{
					if(data[i+1] == 'M')
					{
						sum+=1000-10;
						i++;
					}
					else if(data[i+1] == 'D')
					{
						sum+=500-10;
						i++;
					}
					else if(data[i+1] == 'C')
					{
						sum+=100-10;
						i++;
					}
					else if(data[i+1] == 'L')
					{
						sum+=50-10;
						i++;
					}
					else
					{
						sum+=10;
					}
				}
				else if(data[i] == 'L')
				{
				if(data[i+1] == 'M')
					{
						sum+=1000-50;
						i++;
					}
					else if(data[i+1] == 'D')
					{
						sum+=500-50;
						i++;
					}
					else if(data[i+1] == 'C')
					{
						sum+=100-50;
						i++;
					}
					else
					{
						sum+=50;
					}
				}
				else if(data[i] == 'C')
				{
					if(data[i+1] == 'M')
					{
						sum+=1000-100;
						i++;
					}
					else if(data[i+1] == 'D')
					{
						sum+=500-100;
						i++;
					}
					else
					{
						sum+=100;
					}
				}
				else if(data[i] == 'D')
				{
					if(data[i+1] == 'M')
					{
						sum+=1000-500;
						i++;
					}
					else
					{
						sum+=500;
					}
				}
				else if(data[i] == 'M')
				{
					sum+=1000;
				}
			}
		}
		cout<<sum<<endl;
	}
	
}
