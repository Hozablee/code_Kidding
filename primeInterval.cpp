#include<iostream>
using namespace std;
void is_prime(int n,int m)
{
    int c = 1;
    for(int i=2;i<=m;i++)
    {
        if(n%i == 0)
        {
            c++;
            if(c==2)
            {
            cout << i << endl;

            }
        }

    }

}
int main()
{
    int a,b;
    cin >> a >> b;
    while(a<=b)
    {
        is_prime(a,b);
        a++;
    }

}
