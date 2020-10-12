#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,y%x);
    }
}
int ngcd(int a[],int n)
{
    int res = 0;
    int ca = a[0];
    for(int i = 1;i<=n;i++)
    {
        res = gcd(a[i],res);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int r = 0;
    for(int j = 0;j<n;j++)
    {
        cin >> arr[j];
    }
    for(int k = 0;k<n;k++)
    {
        r = ngcd(arr,n);
    }
    cout << r;
}
