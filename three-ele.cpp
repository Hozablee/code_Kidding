#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int x=0,y=0;
    char a[100000];
    cin >> a;
    for(int i=strlen(a)-1,d=1;i>=0;i--,d=d*10)
    {
        x += (a[i]-48)*d;
        y += (a[i]-48)*d;
    }
    cout << x%3 << " " << y%11;
}


