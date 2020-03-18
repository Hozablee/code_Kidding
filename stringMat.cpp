#include<iostream>
#include<string.h>
using namespace std;
bool finds(string T,string P)
{
    int j = 0;
    int n = 0;
    int m = P.size()-1;
    for(int i = 0;i<m-n;i++)
    {
        while(j<=P.size() && P[n]==T[n+m])
        {
            j=j+1;
            if(j==m)
            {
                return true;
            }
            else
            {
                return false;
            }
            m--;
        }
    }
}
int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << finds(a,b);

}
