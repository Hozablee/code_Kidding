#include<iostream>
#include<cstring>
using namespace std;
int HMdigit(int num)
{
    int cnt = 1;
    while(num != 1)
    {
        num = num/10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int num;
    cin >> num;
    cout << HMdigit(num);
}
