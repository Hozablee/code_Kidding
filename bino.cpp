#include<iostream>
using namespace std;
int fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
int co_eff(int n,int k)
{
    return fac(n)/(fac(n-k)*fac(k));
}
int main()
{
    int n,k;
    cin >> n >> k;
    cout  << co_eff(n,k);
}
