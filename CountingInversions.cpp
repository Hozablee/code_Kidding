#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> data;
int answer=0;

void mergeIn(int fi,int la)
{
	int check=la-fi;
	int mid=(fi+la)/2;
	int change;
	int stack=0;
	int isgood=0;
	vector<int> now;
	if(check != 0)
	{
		mergeIn(fi,mid);
		mergeIn(mid+1,la);
		int i=fi;
		int j=mid+1;
		//cout<<"fi and la = "<<fi<<","<<la<<endl;
		while(1)
		{
			//cout<<"1"<<" i,j ="<<i<<","<<j<<endl;
			if(data[i] > data[j])
			{
				if(stack != 0)
				{
				answer+=1*stack;
				answer+=(mid-i)*stack;
				stack=0;
				}
				answer++;
				answer+=mid-i;
				//cout<<"mid ="<<mid-i<<endl;
				now.push_back(data[j]);
				j++;
				//cout<<"2"<<endl;
			}
			else if(data[i] < data[j])
			{
				if(data[i] != isgood && stack != 0)
				{
				answer+=1*stack;
				answer+=(mid-i)*stack;
				stack=0;
				}
				now.push_back(data[i]);
				i++;
				//cout<<"3"<<endl;
			}
			else
			{
				/*cout<<"data[i] = "<<data[i]<<endl;
				cout<<"isgood = "<<isgood<<endl;
				cout<<"stack = "<<stack<<endl;*/
				
				if(data[i] != isgood && stack != 0)
				{
					answer+=1*stack;
					answer+=(mid-i)*stack;
					stack=0;
					//cout<<"whyanswer = "<<answer<<endl;
				}
				now.push_back(data[i]);
				now.push_back(data[j]);
				isgood=data[i];
				i++;
				j++;
				stack++;
				//cout<<"4"<<endl;
				//cout<<"answer four2 = "<<answer<<endl;
			}
			if(i == mid+1)
			{
				//cout<<"5"<<endl;
				while(j != la+1)
				{
					now.push_back(data[j]);
					j++;
				}
				break;
			}
			else if(j == la+1)
			{
				//cout<<"6"<<endl;
				while(i != mid+1)
				{
					now.push_back(data[i]);
					i++;
				}
				break;
			}
		}
		//cout<<"7"<<endl;
		for(int i = 0 ; i<=check ; i++)
		{
			data[i+fi] = now[i]	;	
		}
		/*for(int i=0;i<=check;i++)
		{
		cout<<data[i+fi]<<" ";
		}
		cout<<endl;
		cout<<"answer = "<<answer<<endl;*/
		
	}
}


int main()
{
	int n;
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		data.push_back(x);
	}
	n=n-1;
	mergeIn(0,n);
	
	/*for(int i=0;i<=n;i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;*/
	cout<<answer;
	
	
}
