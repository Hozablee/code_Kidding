#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char input1,input2;
    cin >> input1>>input2;

    for(char c = int(48);c <=int(input1);c++)
    {
        for(char in = int(48);in < int(input2);in++)
        {
            cout << c <<in<<endl;
        }
    }
}
