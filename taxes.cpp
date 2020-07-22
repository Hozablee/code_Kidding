#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string path;
    cin >> path;
    int x=0;
    int y=0;
    for(int i = 0;i<path.size()i++)
    {
        if(path[i]=='N')
        {
            y++;
        }
        else if(path[i]=='E')
        {
            x++;
        }
        else if(path[i]=='S')
        {
            y--;
        }
        else if(path[i]=='W')
        {
            x--;
        }
        else if(path[i]=='Z')
        {
            x=0;
            y=0;
        }
    }
    cout << x << " " << y;
}
