#include<iostream>
using namespace std;
int main()
{
    int cen ;
    cin >> cen;
    int mid = (2*cen)+1;
    for(int i = 0;i<cen;i++)
    {
        for(int j = 0;j<=mid;j++)
        {
            if(i+j == mid-1 || i == j)
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
