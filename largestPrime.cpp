#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int div=2;

    while(num>=1)
    {
        while(num%div == 0)
        {
            if(num%div==0)
            {
                num=num/div;
            }
        }
        div++;
        if(num==1)
        {
            cout << div-1;
            break;
        }

    }
}
