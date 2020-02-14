#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	
	int queen[8][8],datain,count;
	
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			queen[i][j]=0;
		}
		
	}
	
	for(int i=0;i<8;i++)
	{
		cin>>datain;
		queen[datain-1][i] = 1;
	}
	
	count=0;
	for(int i=0;i<8;i++)
	{
		if(queen[i][i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<7;i++)
	{
		if(queen[i][i+1] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}

	count=0;
	for(int i=0;i<6;i++)
	{
		if(queen[i][i+2] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<5;i++)
	{
		if(queen[i][i+3] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<4;i++)
	{
		if(queen[i][i+4] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<3;i++)
	{
		if(queen[i][i+5] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<2;i++)
	{
		if(queen[i][i+6] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
//*****************************************************************************changein***************************************************************	
	count=0;
	for(int i=1;i<8;i++)
	{
		if(queen[i][i-1] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=2;i<8;i++)
	{
		if(queen[i][i-2] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=3;i<8;i++)
	{
		if(queen[i][i-3] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=4;i<8;i++)
	{
		if(queen[i][i-4] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=5;i<8;i++)
	{
		if(queen[i][i-5] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=6;i<8;i++)
	{
		if(queen[i][i-6] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
//------------------------------------------------------------------------Corssleft-----------------------------------------------------------------------
	
	count=0;
	for(int i=0;i<8;i++)
	{
		if(queen[i][7-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<7;i++)
	{
		if(queen[i][6-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<6;i++)
	{
		if(queen[i][5-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<5;i++)
	{
		if(queen[i][4-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<4;i++)
	{
		if(queen[i][3-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<3;i++)
	{
		if(queen[i][2-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=0;i<2;i++)
	{
		if(queen[i][1-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
//*****************************************************************************changein***************************************************************		
	count=0;
	for(int i=1;i<8;i++)
	{
		if(queen[i][8-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=2;i<8;i++)
	{
		if(queen[i][9-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=3;i<8;i++)
	{
		if(queen[i][10-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=4;i<8;i++)
	{
		if(queen[i][11-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=5;i<8;i++)
	{
		if(queen[i][12-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	count=0;
	for(int i=6;i<8;i++)
	{
		if(queen[i][13-i] == 1)
		{
		count++;
		}
		if(count >= 2)
		{
			cout<<"Invalid";
			return 0;
		}
	}
	
	cout<<"Valid";
	
}

