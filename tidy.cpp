#include<iostream>
#include<string>
using namespace std;
int main()
{
    string tidy;
    cin >> tidy;
    for(int i = 0;i<tidy.size();i++)
    {
        if(tidy[i+1] > tidy[i])
        {
            tidy[i+1]--;
        }
        else
        {
            tidy[i+1]=57;
        }

    }
    for(int j = 0;j<tidy.size();j++)
    {
        cout << tidy[j];
    }
}
