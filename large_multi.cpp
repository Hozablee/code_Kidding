#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    char x[100000];
    int a=0,b=0;
    cin >> a >> b;

    for(int i=strlen(x)-1,d=1;i>0;i--,d=d*10)
    {
        a = int(x[i]-48)*d;
        b = int(x[i]-48)*d;
    }
    cout << a*b;
}
