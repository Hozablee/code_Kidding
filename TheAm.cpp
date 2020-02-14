#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
 
using namespace std;

struct pirate
{
	int id;
	int money;
	int shiled;
	int shildon;
	int spin;
};
vector<struct pirate> all_Pirate;

void print(int n)
{
	cout<<"id = "<<all_Pirate[n].id<<endl;
	cout<<"money = "<<all_Pirate[n].money<<endl;
	cout<<"shiled = "<<all_Pirate[n].shiled<<endl;
	cout<<"spin = "<<all_Pirate[n].spin<<endl;
}
 
int main()
{
	long int id1,id2,id3,formoney,forsteal;
	string order;
	int king=-1,noob;
	long int maxgold;
	long int lowgold;
	
	while(1)
	{
		cin>>id1;
		if(id1 == 0)
		{
			break;
		}
		cin>>order;
//--------------------------------------------------Money--------------------------------------------------------------------------------------------------------
		if(order == "money")
		{
			int nowid1=-1;
			cin>>formoney;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id == id1)
				{
					nowid1=i;
				}
			}
			
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000+formoney;
				newuser->spin=20-1;
				newuser->shiled=3;
				newuser->shildon=0;
				all_Pirate.push_back(*newuser);
				nowid1 =all_Pirate.size()-1;
			}
			else
			{
				if(all_Pirate[nowid1].spin > 0 )
				{
					all_Pirate[nowid1].money += formoney;
					all_Pirate[nowid1].spin--;
				}
			}
		/*	cout<<"money"<<endl;
			print(nowid1);*/
		}
//--------------------------------------------------Spin---------------------------------------------------------------------------------------------------------
		else if(order == "spin")
		{
			int nowid1=-1;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id == id1)
				{
					nowid1=i;
					break;
				}
			}
			
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=20-1+10;
				newuser->shiled=3;
				newuser->shildon=0;
				all_Pirate.push_back(*newuser);
				nowid1 =all_Pirate.size()-1;
			}
			else
			{
				if(all_Pirate[nowid1].spin >0)
				{
					all_Pirate[nowid1].spin += 10;
					all_Pirate[nowid1].spin--;
				}
			}
			/*cout<<"spin"<<endl;
			print(nowid1);*/
		}
//--------------------------------------------------Attack---------------------------------------------------------------------------------------------------------
		else if(order == "attack")
		{
			int nowid1= -1,nowid2= -1;
			cin>>id2;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id == id1)
				{
					nowid1=i;
				}
				if(all_Pirate[i].id == id2)
				{
					nowid2=i;
				}
				if( nowid2 > -1 && nowid1 > -1)
				{
					break;
				}
			}
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=20-1;
				newuser->shiled=3;
				newuser->shildon=0;
				all_Pirate.push_back(*newuser);
				nowid1 =all_Pirate.size()-1;
			}
			
			
			if(all_Pirate[nowid1].spin >0)
			{
				if(nowid2 != -1 && nowid2 != nowid1 && all_Pirate[nowid1].spin > 0)
				{
					all_Pirate[nowid1].spin--;
					if(all_Pirate[nowid2].shildon == 1)
					{
						if(all_Pirate[nowid2].money < 100000)
						{
							all_Pirate[nowid1].money += all_Pirate[nowid2].money;
							all_Pirate[nowid2].money=0;
						}
						else
						{
							all_Pirate[nowid1].money += 100000;
							all_Pirate[nowid2].money -= 100000;
						}
						all_Pirate[nowid2].shildon=0;
					}
					else
					{
						if(all_Pirate[nowid2].money < 300000)
						{
							all_Pirate[nowid1].money += all_Pirate[nowid2].money;
							all_Pirate[nowid2].money=0;
						}
						else
						{
							all_Pirate[nowid1].money += 300000;
							all_Pirate[nowid2].money -= 300000;
						}
					}
				}
			/*cout<<"attack"<<endl;
			print(nowid1);
			print(nowid2);*/
			}
			
		}
//--------------------------------------------------Shield---------------------------------------------------------------------------------------------------------
		else if(order == "shield")
		{
			int nowid1= -1 ;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id  == id1)
				{
					nowid1=i;
					break;
				}	
			}
			
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=19;
				newuser->shiled=2;
				newuser->shildon=1;
				all_Pirate.push_back(*newuser);
			}
			else
			{
				if(all_Pirate[nowid1].spin  >0 && all_Pirate[nowid1].shiled > 0)
				{
				all_Pirate[nowid1].shildon = 1;
				all_Pirate[nowid1].spin--;
				all_Pirate[nowid1].shiled--;
				}
			}
			/*cout<<"shiled"<<endl;
			print(nowid1);*/
		}
//--------------------------------------------------Steal---------------------------------------------------------------------------------------------------------
		else if(order == "steal")
		{
			int nowid1= -1;
			cin>>forsteal;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id  == id1)
				{
					nowid1=i;
					break;
				}
			}
			
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=19;
				newuser->shiled=3;
				newuser->shildon=0;
				all_Pirate.push_back(*newuser);
				nowid1 =all_Pirate.size()-1;
			}
			if(nowid1 != king)
			{
				//cout<<"hesteal"<<endl;
				int steal=(all_Pirate[king].money*forsteal)/100;
				//cout<<steal<<endl;
				all_Pirate[king].money -= steal;
				all_Pirate[nowid1].money += steal;
			}
			/*cout<<"steal"<<endl;
			print(nowid1);
			print(king);*/
		}
//--------------------------------------------------Invite---------------------------------------------------------------------------------------------------------
		else if(order == "invite")
		{
			int nowid1 = -1,nowid3 = -1;
			cin>>id3;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].id  == id1)
				{
					nowid1=i;
				}
				if(all_Pirate[i].id  == id3)
				{
					nowid3=i;
				}
				if( nowid3 > -1 && nowid1 > -1)
				{
					break;
				}
			}
			
			if(nowid1 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=20;
				newuser->shiled=3;
				newuser->shildon=0;
				all_Pirate.push_back(*newuser);
				nowid1 =all_Pirate.size()-1;
			}
			
			if(nowid3 == -1)
			{
				struct pirate *newuser;
				newuser = new struct pirate;
				newuser->id = id1;
				newuser->money=100000;
				newuser->spin=20;
				newuser->shiled=3;
				all_Pirate.push_back(*newuser);
				nowid3 =all_Pirate.size()-1;
				all_Pirate[nowid1].spin+=20-1;
			/*cout<<"invite"<<endl;
			print(nowid1);
			print(nowid3);*/
			}
			
			
			
		}
			maxgold=-1;
			for(int i=0;i<all_Pirate.size();i++)
			{
				if(all_Pirate[i].money > maxgold)
				{
					maxgold=all_Pirate[i].money;
					king=i;
				}
				else if(all_Pirate[i].money == maxgold)
				{
					if(all_Pirate[i].id < all_Pirate[king].id)
					{
						king = i;
					}
					
				}
			}	
	}
	
	maxgold=-1;
	lowgold=-1;
	for(int i=0;i<all_Pirate.size();i++)
	{
		if(all_Pirate[i].money > maxgold)
		{
			maxgold=all_Pirate[i].money;
			king=i;
		}
		else if(all_Pirate[i].money == maxgold)
		{
			if(all_Pirate[i].id < all_Pirate[king].id)
			{
				king = i;
			}
		}
		
		if(all_Pirate[i].money < lowgold)
		{
			lowgold=all_Pirate[i].money;
			noob=i;
		}
		else if(all_Pirate[i].money == lowgold)
		{
			if(all_Pirate[i].id < all_Pirate[noob].id)
			{
				noob = i;
			}
		}
		else if(lowgold == -1)
		{
			lowgold=all_Pirate[i].money;
			noob=i;
		}
	}
	
	cout<<all_Pirate[king].id<<" "<<all_Pirate[king].money<<endl;
	cout<<all_Pirate[noob].id<<" "<<all_Pirate[noob].money;	
}
