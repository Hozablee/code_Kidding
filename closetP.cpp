#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
bool is_prime(int num)
{
    int div=2;
    int counts = 1;
    while(div<=num)
    {
        if (num%div==0)
        {
            counts = counts+1;
        }
        div=div+1;
    }
    if (counts == 2)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}
int main()
{
    int x;
    cin >> x;
    int a = 0;
    int b = 0;
    for(int i = 2;i<=x;i++)
    {
        if(is_prime(i)==1)
        {
            a= (i=i-2)-x;
            b=  x-(i=i+2);
        }
    }
    if(a>b)
    {
        cout << abs(a);
    }
    else if(b>a)
    {
        cout << abs(b);
    }
}
