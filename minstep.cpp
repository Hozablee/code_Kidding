#include<iostream>
using namespace std;
int mins(int n,int c)
{
    if(n==1)
    {
        return c;
    }
    else if(n%2 == 0 && n%3 != 0)
    {
        c++;
        return mins(n/2,c);
    }
    else if(n%3 == 0 && n%2 != 0)
    {
        c++;
        return mins(n/3,c);
    }
    else
    {
        c++;
        return mins(n-1,c);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << mins(n,0);
}
