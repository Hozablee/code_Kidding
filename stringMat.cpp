#include<iostream>
#include<string>
using namespace std;
bool Finds(string str,string p)
{
    int init = 0;
    int lasts = str.size()-1;
    int checks = 0;
    for(int i = 0;i<=str.size()-init;i++)
    {
        while(checks <= str.size() && p[checks] == str[checks+i])
        {
            checks++;
            return true;
        }
        return false;
    }
}
int main()
{
    string a,b;
    cin >> a >> b;
    cout << Finds(a,b);
}
