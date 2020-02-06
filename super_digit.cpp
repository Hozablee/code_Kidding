#include<iostream>
#include<math.h>
using namespace std;
double super_digit(double num)
{   double sums = 0.0;
    double pows = 0.0;
    for(int div=1;div<sizeof(num);div++)
    {
        sums = sums+(num%(pow(10,pows)));
        pows++;
    }
    return sums;
}
int main()
{
    int num;
    cin>>num;
    cout<<super_digit(num)<<" ";
}
