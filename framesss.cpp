#include<iostream>
using namespace std;
int main()
{
    int level;
    cin >> level;
    for(int out = 0;out<level;out++)
    {
        for(int in = 0;in<level;in++)
        {
            if(out ==0 || in==out || in==level-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
