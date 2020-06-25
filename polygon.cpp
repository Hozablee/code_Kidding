#include<iostream>
#include<cmath>
using namespace std;
int poly(int n)
{
    int sums=0;
   for(int i = 0;i<n;i++)
   {
     sums = sums + pow(n,i);
   }
    return sums;
}
int main()
{
    int n;
    cin >> n;
    cout << poly(n);
}
