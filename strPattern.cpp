#include<iostream>
#include<string.h>
using namespace std;
bool str_match(string T,string P)
{
    int j =0;
    int n = T.size()-1;
    int m = P.size()-1;
    for(int i = 0;i<n-m;i++)
    {
        while(j<m && P[j]==T[i+j])
        {
            j=j+1;
            if(j==m)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string T,P;
    cout << "input some string :";
    cin >> T;
    cout << "input some pattern :";
    cin >> P;
    cout << str_match(T,P);
}
