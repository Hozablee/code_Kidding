#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool compares(char i,char j)
{
    return i > j;
}
int main()
{
    string inputs;
    cin >> inputs;
    sort(inputs.begin(),inputs.end());
    cout << inputs << endl;
    sort(inputs.begin(),inputs.end(),compares);
    cout << inputs;
}
