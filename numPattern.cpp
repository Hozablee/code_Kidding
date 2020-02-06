#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int tier;
    int num;
    cin >> tier;
    for(int i = tier;i>=0;i--)
    {
        num=0;
        for(int j = 0;j<=tier-i;j++)
        {
            if(j<10)
            {
                cout << num;
                num++;
            }
            else
            {
                num--;
                cout << num;
            }

        }
        cout << endl;
    }
}
