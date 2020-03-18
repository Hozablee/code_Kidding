#include<iostream>
using namespace std;
int coeff(int n,int k)
{
    if(n==k || k==0)
    {
        return 1;
    }
    else
    {
        return coeff(n-1,k-1)+coeff(n,k-1);
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    cout << coeff(n,k);
}
