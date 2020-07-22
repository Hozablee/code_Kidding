#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y=0;
    y = ((x&0b10101010)>>1) | ((x&0b01010101)<<1);
    cout << y;
}
