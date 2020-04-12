#include<iostream>
using namespace std;
int happy(int n)
{
    if(n<10)
    {
        return n;
    }
    if(n > 10)
    {
        return happy(n%10)+happy(n/10);
    }

}
int main()
{
    int n;
    cin >> n;
    cout << happy(n);
}
