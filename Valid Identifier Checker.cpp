#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;



int main()
{
	char data[33];
	int i=1;
	int check =0;
	cin>>data;
	if((data[0] >= 65 && data[0] <= 90)||(data[0] >= 97 && data[0] <= 122 )||(data[0] == 95))
	{
		check=1;
	}
	else
	{
		check=0;
	}
	if(check==1)
	{
		while(data[i] != NULL)
		{
			if((data[i] >= 65 && data[i] <= 90)||(data[i] >= 97 && data[i] <= 122 )||(data[i] >= 48 && data[i] <= 57 )||(data[i] == 95))
			{
				check=1;
			}
			else
			{
				check=0;
				break;
			}
			i++;
		}
	}
	if(check == 1)
		{
			cout<<"Valid";
		}
	else
		{
			cout<<"Invalid";
		}
}

