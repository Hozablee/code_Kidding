#include<iostream>
using namespace std;

char array[100][100];
int x = 0;
int y = 0;
int goal_i = 0;
int goal_j = 0;
void flood(int goal_i,int goal_j){

	if(goal_i<0 or goal_j<0 or goal_i>=x or goal_j>=y)
        {
		//cout<<"in1";
		return;
	}
	else if(array[goal_i][goal_j]=='D')
	{
		array[goal_i][goal_j] = 'W';
		//cout<<"in2";
	}
	else
	{
		cout<<"in3" << endl;
		return;
	}
	cout<<"---";
		flood(goal_i-1,goal_j-1);
		flood(goal_i-1,goal_j);
		flood(goal_i-1,goal_j+1);

		flood(goal_i,goal_j-1);
		flood(goal_i,goal_j+1);

		flood(goal_i+1,goal_j-1);
		flood(goal_i+1,goal_j);
		flood(goal_i+1,goal_j+1);

}

int main(){

	while(true)
        {
	cin>>x>>y;
		if(x==0 and y==0)
		{
			break;
		}
		else{
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					cin>>array[i][j];
				}
			}
			cin>>goal_i;
			cin>>goal_j;
			//cout<<array[goal_i][goal_j]<<endl;
			if(array[goal_i][goal_j]=='B')
			{
				array[goal_i][goal_j] = 'W';

			}
			flood(goal_i,goal_j);


			for(int i=0;i<x;i++)
                {
				for(int j=0;j<y;j++)
				{
						cout<<array[i][j];

				}
				cout<<endl;
			}
		}
	}

}
